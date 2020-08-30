#include "HomeGUI.h"

HomeGUI::HomeGUI(QWidget *parent)
	: QWidget(parent)
{
	//QByteArray data;
	//MyUDP c;
	//this->udp = new MyUDP;

	ui.setupUi(this);
	//this->soc = soc;
	//c.SendCmd("I'm connected and online");
	//addItem("Coucou");
	flux = new MyUDP;
	thread = new SuperThread;
	audio = new Audio;
//	addItem();
//	addItem(this->flux->getStock());
	
	thread->start();
	QObject::connect(flux->UDPsocket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

HomeGUI::~HomeGUI()
{
}

void HomeGUI::addItem(const QByteArray data)
{
	QStringList list;
	QString str(data);

	list << str;
	ui.mabite->addItems(list);
}

void HomeGUI::readyRead()
{
	QByteArray buffer;
	buffer.resize(flux->UDPsocket->pendingDatagramSize());

	QHostAddress sender;
	quint16 senderPort;
	pack_voice *sound = new pack_voice;

	sound->size = flux->UDPsocket->readDatagram(buffer.data(), buffer.size(),
		&sender, &senderPort);

	qDebug() << "Message from: " << sender.toString();
	qDebug() << "Message port: " << senderPort;
	qDebug() << "Message: " << buffer;
	sound->str = (unsigned char *)strdup(buffer.data());
	sound->size = buffer.size();
	audio->playSound(sound);

}
