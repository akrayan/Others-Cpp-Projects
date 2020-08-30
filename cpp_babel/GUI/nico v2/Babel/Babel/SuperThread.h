#pragma once

#ifndef ST_H
#define ST_H

#include "TestUDP.h"
class MyUDP;
class SuperThread : public QThread
{
private:
	MyUDP *_client;
	Audio *_audio;
	pack_voice *_sound;
	std::string _ip;
public:
	SuperThread(MyUDP *, Audio *);
	~SuperThread();
	void run();
};

#endif // !1
