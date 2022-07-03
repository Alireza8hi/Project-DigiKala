#include "mainwindow.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "accountwindow.h"
#include "searchdialog.h"
#include "ui_mainwindow.h"
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


void MainWindow::on_AllCommodityBtn_clicked()
{
    AllCommodityWindow = new class AllCommodityWindow(this);
    AllCommodityWindow->show();
}


void MainWindow::on_CategoryBtn_clicked()
{
    CategoryWindow = new class CategoryWindow(this);
    CategoryWindow->show();
}

void MainWindow::on_AccountAct_triggered()
{
    AccountWindow = new class AccountWindow(this);
    AccountWindow->show();
}



void MainWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}

void MainWindow::closed_account()
{
    open_account = false;
    return;
}

