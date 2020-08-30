#include "Audio.h"

static int Callback(const void *inputBuffer, void *outputBuffer,
	unsigned long framesPerBuffer,
	const PaStreamCallbackTimeInfo* timeInfo,
	PaStreamCallbackFlags statusFlags,
	void *userData)
{
	int i;
	float *in;
	float *out;
	Audio *p;

	p = (Audio *)userData;
	out = (float*)outputBuffer;
	in = (float*)inputBuffer;
	i = -1;
	while (++i < framesPerBuffer * 2)
		p->in[i] = SAMPLE_SILENCE;
	i = -1;
	while (++i < framesPerBuffer * 2)
		p->in[i] = in[i];
	p->l_in.push_back(p->in);
	i = -1;
	while (++i < framesPerBuffer * 2)
		out[i] = p->out[i];
	/*i = -1;
	while (++i < framesPerBuffer * 2)
	p->out[i] = SAMPLE_SILENCE;*/

	return paContinue;
}

Audio::Audio()
{
	int err2;

	this->enc = opus_encoder_create(SAMPLE_RATE, 2, OPUS_APPLICATION_VOIP, &err2);
	this->dec = opus_decoder_create(SAMPLE_RATE, 2, &err2);
	PaStreamParameters  inputParameters, outputParameters;
	PaStream*           stream;
	PaError             err = paNoError;

	err = Pa_Initialize();
	inputParameters.device = Pa_GetDefaultInputDevice();
	if (inputParameters.device == paNoDevice)
		fprintf(stderr, "Error: No default input device.\n");
	inputParameters.channelCount = 2;
	inputParameters.sampleFormat = paFloat32;
	inputParameters.suggestedLatency = Pa_GetDeviceInfo(inputParameters.device)->defaultLowInputLatency;
	inputParameters.hostApiSpecificStreamInfo = NULL;
	outputParameters.device = Pa_GetDefaultOutputDevice();
	if (outputParameters.device == paNoDevice)
		fprintf(stderr, "Error: No default output device.\n");
	outputParameters.channelCount = 2;
	outputParameters.sampleFormat = paFloat32;
	outputParameters.suggestedLatency = Pa_GetDeviceInfo(outputParameters.device)->defaultLowOutputLatency;
	outputParameters.hostApiSpecificStreamInfo = NULL;
	err = Pa_OpenStream(&stream, &inputParameters, &outputParameters, SAMPLE_RATE, FRAMES_PER_BUFFER, paClipOff, Callback, this);
	//err = Pa_OpenDefaultStream(&stream, 2, 2, paFloat32, 48000, FRAMES_PER_BUFFER, Callback, this);
	err = Pa_StartStream(stream);
}


Audio::~Audio()
{
	delete in;
	if (out != NULL)
		delete out;
}

pack_voice *Audio::getVoice()
{
	int i;
	pack_voice *voice;

	voice = NULL;
	voice = new pack_voice;
	voice->str = new unsigned char[ENCODE_SIZE];
	if (this->l_in.size() > 0)
	{
		voice->size = opus_encode_float(this->enc, this->l_in[0], FRAMES_PER_BUFFER, voice->str, ENCODE_SIZE);
		this->l_in.erase(l_in.begin() + 0);
	}
	return voice;
}


void Audio::playSound(pack_voice *sound)
{
	int i;

	opus_decode_float(this->dec, sound->str, sound->size, this->out, FRAMES_PER_BUFFER, 0);
	delete sound->str;
	delete sound;
}

