#include "HomeGUI.h"
#include <windows.h>

HomeGUI::HomeGUI(Client *myClient_p, SocketClient *myClientInfo, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	clientInfo = myClientInfo;
	this->myClient = myClient_p;
	listItem << "dog" << "cat" << "toto" << "titi" << "tutu";

	ui.listWidget_friends->addItems(listItem);
	QObject::connect(ui.lineEdit_filter, SIGNAL(QLineEdit::textChanged(const QString&)), this, SLOT(on_filterEdit_change(const QString &)));
	QObject::connect(ui.logout_btn, SIGNAL(clicked()), this, SLOT(logout_btn()));
	QObject::connect(ui.call_btn, SIGNAL(clicked()), this, SLOT(call_btn()));
}

HomeGUI::~HomeGUI()
{
}

void HomeGUI::call_btn()
{
	OutputDebugString(L"CALL LAUNCH");
	myClient->call(*myClient, clientInfo, std::stoi(ui.id_to_call->text().toStdString()), 1818);
}

void HomeGUI::on_filterEdit_change(const QString &arg1)
{
//	QRegExp	regExp(arg1, Qt::CaseInsensitive, QRegExp::Wildcard);
	ui.listWidget_friends->clear();
//	ui.listWidget_friends->addItems(listItem.filter(regExp));
}

void HomeGUI::logout_btn()
{
	OutputDebugString(L"LOG OUT BNT ACTIVE !");
	myClient->deconnexion(*myClient, clientInfo);
	this->hide();
}


void HomeGUI::lecture()
{

}