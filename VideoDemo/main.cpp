#include <QtWidgets/QApplication>
#include "../VideoGui/VideoGui.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Gui::VideoGui gui;
	gui.show();
	return a.exec();
}