#include "LogGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	LogGUI w;
	w.show();
	return a.exec();
}
