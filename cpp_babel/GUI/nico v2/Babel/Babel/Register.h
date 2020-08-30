#pragma once

#include <QWidget>
#include "ui_Register.h"
#include "Client.h"

class Register : public QWidget
{
	Q_OBJECT

public:
	Register(Client *myClient, SocketClient *clientInfo, QWidget *parent = Q_NULLPTR);
	~Register();
	Client *client;
	SocketClient *myClientInfo;

public slots:
	void create_new_account();

private:
	Ui::Register ui;
};
