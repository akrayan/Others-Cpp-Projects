#pragma once

//#include "SuperThread.h"
#include <QWidget>
#include "ui_HomeGUI.h"
#include <qtcpsocket.h>
//#include "myudp.h"
#include <TestUDP.h>
//#include "Audio.h"

class MyUDP;
class Audio;
//class SuperThread;

class HomeGUI : public QWidget
{
	Q_OBJECT

public:
	MyUDP *flux;
	SuperThread *thread;
	Audio *audio;
	pack_voice *sound;
	HomeGUI(QWidget *parent = Q_NULLPTR);
	~HomeGUI();
	void addItem(const QByteArray data);

public slots:
	void readyRead();

private:
	Ui::HomeGUI ui;
	QTcpSocket soc;
};
