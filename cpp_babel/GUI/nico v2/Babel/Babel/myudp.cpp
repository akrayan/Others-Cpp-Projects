// myudp.cpp

#include "myudp.h"



MyUDP::MyUDP(std::string ip, int port, QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
	this->_ip = ip;
	this->_port = port;
	socket->bind(QHostAddress::Any, _port);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void MyUDP::SendCmd(QString str_ip, int port, char *msg, int size)
{
    socket->writeDatagram(msg, size, QHostAddress(str_ip), port);
   // std::cout << "Message sent !" << std::endl;
    //socket->writeDatagram(Data, QHostAddress::LocalHost, 4242);
}

void MyUDP::readyRead()
{
    QByteArray buffer;
    buffer.resize(socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;
	pack_voice *sound = new pack_voice;

	sound->size = socket->readDatagram(buffer.data(), buffer.size(),
		&sender, &senderPort);

	   qDebug() << "Message from: " << sender.toString();
	   qDebug() << "Message port: " << senderPort;
	  qDebug() << "Message: " << buffer;
	sound->str = (unsigned char *)strdup(buffer.data());
	sound->size = buffer.size();
	a->playSound(sound);
}

std::string MyUDP::getIp() const
{
	return (_ip);
}

int MyUDP::getPort() const
{
	return (_port);
}
