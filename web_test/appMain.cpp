#include <QWebEngineView>
#include <QApplication>

int main(int argc, char** argv)
{
	QApplication a(argc, argv);
	QWebEngineView v;
	v.load(QUrl("http://www.baidu.com"));
	v.show();
	return a.exec();
}
