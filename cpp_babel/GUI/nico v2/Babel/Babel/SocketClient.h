#pragma once
#include <qtcpsocket.h>
#include "Settings.h"

class SocketClient
{
public:
	SocketClient();
	~SocketClient();
	QTcpSocket soc;
	Settings *settings;
};
