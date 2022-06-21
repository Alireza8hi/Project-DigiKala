#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homewindow.h"
#include "ui_homewindow.h"
#include "categorywindow.h"
#include "ui_categorywindow.h"
#include "accountwindow.h"
#include "ui_accountwindow.h"
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
