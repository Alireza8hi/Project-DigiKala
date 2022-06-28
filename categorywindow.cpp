#include "mainwindow.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "accountwindow.h"
#include "ui_categorywindow.h"
#include <QLineEdit>
#include <QDateTime>
#include <QWidget>
#include <QLabel>

CategoryWindow::CategoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CategoryWindow)
{
    ui->setupUi(this);

    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);
}

CategoryWindow::~CategoryWindow()
{
    delete ui;
}
