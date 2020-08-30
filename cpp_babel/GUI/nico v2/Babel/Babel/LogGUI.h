#pragma once

#include <QtWidgets/QMainWindow>
#include <QtNetwork/QtNetwork>
#include <QString>
#include <Windows.h>
#include "ui_LogGUI.h"
#include "ui_Settings.h"
#include "HomeGUI.h"
#include "SocketClient.h"
#include "Register.h"
#include "Settings.h"
#include "AccepteCallGUI.h"


class LogGUI : public QMainWindow
{
	Q_OBJECT

public:
	enum pageActive
	{
		LOGIN,
		REGISTER
	};
	LogGUI(QWidget *parent = Q_NULLPTR);
	Register	*registerPage;
	HomeGUI *homePage;
	SocketClient clientInfo;
	Client client;
	pageActive whereAreYou;
	AccepteCallGUI *acceptePage;

public slots:
	void change_setting();
	void registering();
	void recoit_IP();  // en provenance de l'IHM et se connecte au serveur
	void recoit_texte(); // en provenance de l'IHM et écrit sur la socket

private slots:
	void connexion_OK();  // en provenance de la socket et émet un signal vers l'IHM
	void lecture();       // en provenance de la socket, lit la socket, émet un signal vers l'IHM

signals:
	void vers_IHM_connexion_OK();
	void vers_IHM_texte(QString);

private:
	Ui::LogGUIClass ui;
};
