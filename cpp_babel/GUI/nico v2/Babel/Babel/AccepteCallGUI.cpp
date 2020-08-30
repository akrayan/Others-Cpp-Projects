#include "AccepteCallGUI.h"
#include <Windows.h>

AccepteCallGUI::AccepteCallGUI(Client *client, SocketClient *clientInfo, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	myClient = client;
	myClientInfo = clientInfo;
	//ui.end_call.hide();
	QObject::connect(ui.accpt_btn, SIGNAL(clicked()), this, SLOT(accept_btn()));
	QObject::connect(ui.reject_btn, SIGNAL(clicked()), this, SLOT(reject_btn()));
	QObject::connect(ui.end_call, SIGNAL(clicked()), this, SLOT(end_call_bnt()));
}

AccepteCallGUI::~AccepteCallGUI()
{
}

void AccepteCallGUI::accept_btn()
{
	int port_f;
	OutputDebugString(L"APPEL ACCEPTER ");
	port_f = myClient->getcalllist().begin()->id;
	myClient->accept_call(*myClient, myClientInfo, port_f);
	ui.accpt_btn->hide();
	ui.reject_btn->hide();
}

void AccepteCallGUI::reject_btn()
{
	int port_f;
	OutputDebugString(L"APPEL REJETER ");
	port_f = myClient->getcalllist().begin()->id;
	myClient->accept_call(*myClient, myClientInfo, port_f);
	ui.reject_btn->hide();
	ui.accpt_btn->hide();
}

void AccepteCallGUI::end_call_bnt()
{
	
}
