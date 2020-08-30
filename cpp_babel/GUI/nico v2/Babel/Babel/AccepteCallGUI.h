#pragma once

#include <QWidget>
#include "ui_AccepteCallGUI.h"
#include "SocketClient.h"
#include "Client.h"

class Client;

class AccepteCallGUI : public QWidget
{
	Q_OBJECT

public:
	AccepteCallGUI(Client *Client, SocketClient *clientInfo, QWidget *parent = Q_NULLPTR);
	~AccepteCallGUI();
	Client *myClient;
	SocketClient *myClientInfo;

public slots:
	void accept_btn();
	void reject_btn();
	void end_call_bnt();

private:
	Ui::AccepteCallGUI ui;
};
