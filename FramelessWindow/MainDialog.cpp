#include "MainDialog.h"
#include <QMouseEvent>

MainDialog::MainDialog(QWidget* parent)
	: QDialog(parent)
	, mousePressed_(false)
	  , mousePosition_(0, 0)
	  , windowPosition_(0, 0)
{
	initialize();
}

MainDialog::~MainDialog()
{
}

void MainDialog::initialize()
{
	setWindowFlags(Qt::FramelessWindowHint);
}

void MainDialog::mousePressEvent(QMouseEvent* event)
{
	QDialog::mousePressEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		windowPosition_ = this->pos();
		mousePosition_ = event->globalPos();
		mousePressed_ = true;
	}
}

void MainDialog::mouseReleaseEvent(QMouseEvent* event)
{
	QDialog::mouseReleaseEvent(event);
	if (event->button() == Qt::LeftButton)
	{
		mousePressed_ = false;
	}
}

void MainDialog::mouseMoveEvent(QMouseEvent* event)
{
	move(windowPosition_ + (event->globalPos() - mousePosition_));
}
