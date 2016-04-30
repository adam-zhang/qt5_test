#ifndef __MAINDIALOG__H
#define __MAINDIALOG__H

#include <QDialog>

class MainDialog : public QDialog
{
public:
	MainDialog(QWidget* parent = 0);
	~MainDialog();
private:
	void initialize();
private:
	bool mousePressed_;
	QPoint mousePosition_;
	QPoint windowPosition_;
protected:
	void mousePressEvent(QMouseEvent*);
	void mouseReleaseEvent(QMouseEvent*);
	void mouseMoveEvent(QMouseEvent*);
};
#endif//__MAINDIALOG__H
