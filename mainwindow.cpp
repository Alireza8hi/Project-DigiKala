#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homewindow.h"
#include "ui_homewindow.h"
#include "categorywindow.h"
#include "ui_categorywindow.h"
#include "accountwindow.h"
#include "ui_accountwindow.h"
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_HomeBtn_clicked()
{
    HomeWindow *h = new HomeWindow;
    h->show();
}


void MainWindow::on_CategoryBtn_clicked()
{
    CategoryWindow *c = new CategoryWindow;
    c->show();
}


void MainWindow::on_AccountBtn_clicked()
{
    AccountWindow *a = new AccountWindow;
    a->show();
}

