#include "LogGUI.h"
#include "Settings.h"

LogGUI::LogGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QObject::connect(ui.connect_btn, SIGNAL(clicked()), this, SLOT(recoit_IP()));
	// bouton connection
	QObject::connect(ui.settings_btn, SIGNAL(clicked()), this, SLOT(change_setting()));
	// bouton settings
	QObject::connect(&soc, SIGNAL(connected()), this, SLOT(connexion_OK()));
	// signal �mis lors de la connexion au serveur
	QObject::connect(&soc, SIGNAL(readyRead()), this, SLOT(lecture()));
	// signal �mis lorsque des donn�es sont pr�tes � �tre lues
}

void LogGUI::change_setting()
{
	settings = new Settings();
	settings->show();
}

void LogGUI::recoit_IP()
{
	IP = settings->getIp();
	port = settings->getPort();
	ui.label_login->setText(IP);

	soc.connectToHost(IP, port); // pour se connecter au serveur
}

void LogGUI::recoit_texte()
{
	QTextStream texte(&soc); // on associe un flux � la socket
//	texte << t << endl;        // on �crit dans le flux le texte saisi dans l'IHM
}

void LogGUI::connexion_OK()
{
	emit vers_IHM_connexion_OK(); // on envoie un signal � l'IHM
	this->hide();
	homePage = new HomeGUI();
	homePage->show();
}

void LogGUI::lecture()
{
	QString ligne;
	while (soc.canReadLine()) // tant qu'il y a quelque chose � lire dans la socket
	{
		ligne = soc.readLine();     // on lit une ligne
		emit vers_IHM_texte(ligne); // on envoie � l'IHM
	}
}