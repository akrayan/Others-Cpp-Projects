#pragma once

#include <QWidget>
#include "ui_HomeGUI.h"
#include <qtcpsocket.h>
#include "SocketClient.h"
#include "Client.h"

class HomeGUI : public QWidget
{
	Q_OBJECT

public:
	HomeGUI(Client *myClient_p, SocketClient *myClientInfo, QWidget *parent = Q_NULLPTR);
	~HomeGUI();
	SocketClient *clientInfo;
	Client *myClient;

public slots:
	void lecture();
	void on_filterEdit_change(const QString &);
	void logout_btn();
	void call_btn();

private:
	Ui::HomeGUI ui;
	QStringList listItem;
};
