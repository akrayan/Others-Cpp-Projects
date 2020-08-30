#ifndef AUDIO_H_
#define AUDIO_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "portaudio.h"
#include "opus.h"

#define ENCODE_SIZE (4096 * 20)
#define SAMPLE_RATE  (24000)
#define FRAMES_PER_BUFFER (480)
#define SAMPLE_SILENCE  (0.0f)

typedef struct s_packed_voice
{
	unsigned char *str;
	int size;
}pack_voice;

class Audio
{
public:
	Audio();
	~Audio();
	
	pack_voice *getVoice();
	void playSound(pack_voice *sound);
	
//
	float in[FRAMES_PER_BUFFER * 2];
	float out[FRAMES_PER_BUFFER * 2];
	OpusEncoder *enc;
	OpusDecoder *dec;
	std::vector<float *> l_in;
//	std::vector<float *> l_out;
};

#endif