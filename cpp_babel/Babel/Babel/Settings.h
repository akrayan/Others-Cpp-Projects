#pragma once

#include <QWidget>
#include "ui_Settings.h"

class Settings : public QWidget
{
	Q_OBJECT

public:
	Settings(QWidget *parent = Q_NULLPTR);
	~Settings();
	QString getIp() const;
	void setIp(const QString& char_);
	int getPort() const;
	void setPort(int port);

public slots:
	void setValue();

private:
	QString IP;
	int port;

private:
	Ui::Settings ui;
};
