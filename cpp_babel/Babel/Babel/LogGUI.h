#pragma once

#include <QtWidgets/QMainWindow>
#include <QtNetwork/QtNetwork>
#include "ui_LogGUI.h"
#include "ui_Settings.h"
#include "Settings.h"
#include "HomeGUI.h"

class LogGUI : public QMainWindow
{
	Q_OBJECT

public:
	LogGUI(QWidget *parent = Q_NULLPTR);
	Settings *settings;
	HomeGUI *homePage;

public slots:
	void change_setting();
	void recoit_IP();  // en provenance de l'IHM et se connecte au serveur
	void recoit_texte(); // en provenance de l'IHM et écrit sur la socket

private slots:
	void connexion_OK();  // en provenance de la socket et émet un signal vers l'IHM
	void lecture();       // en provenance de la socket, lit la socket, émet un signal vers l'IHM

signals:
	void vers_IHM_connexion_OK();
	void vers_IHM_texte(QString);

private:
	QString IP;
	int port;
	Ui::LogGUIClass ui;
	QTcpSocket soc;
};
