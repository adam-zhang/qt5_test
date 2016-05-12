#ifndef __MAINWIDGET__H
#define __MAINWIDGET__H

#include <QWidget>

class MainWidget : public QWidget
{
public:
	MainWidget(QWidget* parent = 0);
	~MainWidget();
private:
	void initialize();
private slots:
	//void onMapped(QWidget*);
	void onStateChanged(int);
};
#endif//__MAINWIDGET__H
