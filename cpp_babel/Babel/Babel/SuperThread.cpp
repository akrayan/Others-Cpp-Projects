#include "SuperThread.h"

SuperThread::SuperThread(MyUDP *client, Audio *audio)
{
	_audio = audio;
	_client = client;
}


SuperThread::~SuperThread()
{
}

void SuperThread::run()
{
	while (42)
	{
		_sound = _audio->getVoice();
		_client->SendCmd("10.20.86.12", 4242, (char *)_sound->str, _sound->size);
		delete _sound->str;
		delete _sound;
	}
}