#include <QApplication>
#include "MainDialog.h"

int main(int argc, char** argv)
{
	QApplication a(argc, argv);
	a;
	MainDialog d;
	return d.exec();
};
