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
	qDebug() << "Thread d'envoie ip cible : " << _client->getIp().c_str();
	while (42)
	{
		_sound = _audio->getVoice();
		_client->SendCmd(_client->getIp().c_str(), _client->getPort(), (char *)_sound->str, _sound->size);
		delete _sound->str;
		delete _sound;
	}
}