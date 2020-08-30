#include "Register.h"
#include "windows.h"

Register::Register(Client *myClient, SocketClient *clientInfo, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	client = myClient;
	myClientInfo = clientInfo;
	QObject::connect(ui.commandLinkButton, SIGNAL(clicked()), this, SLOT(create_new_account()));
}

Register::~Register()
{
}

void Register::create_new_account()
{
	OutputDebugString(L"Creating Account\n");
	if (!myClientInfo->settings->getIp().isEmpty() && myClientInfo->settings->getPort() > 1024)
	{
		myClientInfo->soc.connectToHost(myClientInfo->settings->getIp(), myClientInfo->settings->getPort()); // pour se connecter au serveur
	}
	client->setLogin(ui.lineEdit_pseudo->text().toStdString());
	client->setPassword(ui.lineEdit_mdp->text().toStdString());
	client->create(*client, myClientInfo);
}
 