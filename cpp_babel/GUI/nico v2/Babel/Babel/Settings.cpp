#include "Settings.h"

Settings::Settings(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	IP = "10.20.86.160";
	port = 4243;
	ui.ip_edit->setText(IP);
	QObject::connect(ui.validation, SIGNAL(clicked()), this, SLOT(setValue()));
}

Settings::~Settings()
{
}

QString Settings::getIp() const
{
	return IP;
}

void Settings::setIp(const QString& char_)
{
	IP = char_;
}

int Settings::getPort() const
{
	return port;
}

void Settings::setPort(int port)
{
	this->port = port;
}

void Settings::setValue()
{
	IP = ui.ip_edit->text();
	port = atoi(ui.port_edit->text().toStdString().c_str());
	this->hide();
}
