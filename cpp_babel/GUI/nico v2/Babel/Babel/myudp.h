// myudp.h

#ifndef MYUDP_H
#define MYUDP_H

#include "TestUDP.h"

class MyUDP : public QObject
{
    Q_OBJECT
public:
    explicit MyUDP(std::string ip, int port, QObject *parent = 0);
    void SendCmd(QString ip, int port, char *, int);
	std::string getIp() const;
	int getPort() const;
private:
	std::string _ip;
	int _port;
	QUdpSocket *socket;

public:
	Audio *a;
signals:

	public slots :
		void readyRead();
};

#endif // MYUDP_H
