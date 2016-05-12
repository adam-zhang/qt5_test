#include "MainWidget.h"
#include <QCheckBox>
#include <QSignalMapper>
#include <QMessageBox>
#include <QDebug>

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

MainWidget::~MainWidget()
{
}

void MainWidget::initialize()
{
	QCheckBox* box = new QCheckBox("Hello", this);
	connect(box, &QCheckBox::stateChanged, this, &MainWidget::onStateChanged);
	box = new QCheckBox("World", this);
	box->setGeometry(0, 20, 100, 20);
	connect(box, &QCheckBox::stateChanged, this, &MainWidget::onStateChanged);
	box = new QCheckBox("Gril", this);
	box->setGeometry(0, 40, 100, 20);
	connect(box, &QCheckBox::stateChanged, this, &MainWidget::onStateChanged);


}

void MainWidget::onStateChanged(int)
{
	QCheckBox* box = static_cast<QCheckBox*>(sender());
	if (box != 0)
		QMessageBox::information(0, "", box->text());
}

//void MainWidget::onMapped(QWidget* w)
//{
//	//QString str = QString("Hello!").arg(i);
//	QCheckBox* c = static_cast<QCheckBox*>(w);
//	QMessageBox::information(NULL, "", c->text());
//}
