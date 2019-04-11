#include "LexiEditor.h"
#include <QtWidgets/QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	/*QPushButton quit("Quit");
	quit.resize(75, 30);
	quit.setFont(QFont("Times", 18, QFont::Bold));*/


	LexiEditor w;
	w.show();
	return a.exec();
}
