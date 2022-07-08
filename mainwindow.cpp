#include "mainwindow.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "accountwindow.h"
#include "searchdialog.h"
#include "tobeknowndialog.h"
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


void MainWindow::on_VoroodVaSabteNam_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,2);
    a->show();
}


void MainWindow::on_BazgardandanKalaAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,3);
    a->show();
}


void MainWindow::on_RavanSabtSefareshAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,4);
    a->show();
}


void MainWindow::on_PrivacyAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,5);
    a->show();
}


void MainWindow::on_TermOfUseAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,6);
    a->show();
}


void MainWindow::on_EmailAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,7);
    a->show();
}


void MainWindow::on_FaxAct_triggered()
{
    ToBeKnownDialog *a = new ToBeKnownDialog(this,8);
    a->show();
}

