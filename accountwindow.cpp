#include "mainwindow.h"
#include "qobjectdefs.h"
#include "ui_mainwindow.h"
#include "homewindow.h"
#include "ui_homewindow.h"
#include "categorywindow.h"
#include "ui_categorywindow.h"
#include "accountwindow.h"
#include "ui_accountwindow.h"
#include "signupdialog.h"
#include "ui_signupdialog.h"
#include <QLabel>
#include <QDateTime>

AccountWindow::AccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this);
    this->setPalette(QColorConstants::Svg::lightgray);

    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);

    ui->UserNameLbl->setHidden(true);
    ui->PassLbl->setHidden(true);
    ui->UserNameLe->setHidden(true);
    ui->PassLe->setHidden(true);
    ui->UserSignInBtn->setHidden(true);
}

AccountWindow::~AccountWindow()
{
    delete ui;
}

void AccountWindow::on_LoginBtn_clicked()
{
    if (ui->UserNameLbl->isHidden() == true)
    {
        ui->UserNameLbl->setHidden(false);
        ui->PassLbl->setHidden(false);
        ui->UserNameLe->setHidden(false);
        ui->PassLe->setHidden(false);
        ui->UserSignInBtn->setHidden(false);
    }
    if(ui->UserNameLe->text().isEmpty() == false || (ui->PassLe->text().isEmpty() == false))
    {
        ui->UserNameLe->clear();
        ui->PassLe->clear();
    }
    ui->UserNameLbl->setGeometry(ui->UserNameLbl->x() , 299 , ui->UserNameLbl->width() , ui->UserNameLbl->height());
    ui->UserNameLe->setGeometry(ui->UserNameLe->x() , 299 , ui->UserNameLe->width() , ui->UserNameLe->height());
    ui->PassLbl->setGeometry(ui->PassLbl->x() , 379 , ui->PassLbl->width() , ui->PassLbl->height());
    ui->PassLe->setGeometry(ui->PassLe->x() , 379 , ui->PassLe->width() , ui->PassLe->height());
    ui->UserSignInBtn->setGeometry(ui->UserSignInBtn->x() , 379 , ui->UserSignInBtn->width() , ui->UserSignInBtn->height());
    ui->AdminBtn->setGeometry(ui->AdminBtn->x() , 460 , ui->AdminBtn->width() , ui->AdminBtn->height());
}


void AccountWindow::on_AdminBtn_clicked()
{
    if (ui->UserNameLbl->isHidden() == true)
    {
        ui->UserNameLbl->setHidden(false);
        ui->PassLbl->setHidden(false);
        ui->UserNameLe->setHidden(false);
        ui->PassLe->setHidden(false);
        ui->UserSignInBtn->setHidden(false);
    }
    if(ui->UserNameLe->text().isEmpty() == false || (ui->PassLe->text().isEmpty() == false))
    {
        ui->UserNameLe->clear();
        ui->PassLe->clear();
    }
    ui->UserNameLbl->setGeometry(ui->UserNameLbl->x() , 380 , ui->UserNameLbl->width() , ui->UserNameLbl->height());
    ui->UserNameLe->setGeometry(ui->UserNameLe->x() , 380 , ui->UserNameLe->width() , ui->UserNameLe->height());
    ui->PassLbl->setGeometry(ui->PassLbl->x() , 460 , ui->PassLbl->width() , ui->PassLbl->height());
    ui->PassLe->setGeometry(ui->PassLe->x() , 460 , ui->PassLe->width() , ui->PassLe->height());
    ui->UserSignInBtn->setGeometry(ui->UserSignInBtn->x() , 460 , ui->UserSignInBtn->width() , ui->UserSignInBtn->height());
    ui->AdminBtn->setGeometry(ui->AdminBtn->x() , 300 , ui->AdminBtn->width() , ui->AdminBtn->height());

}


void AccountWindow::on_SignUpBtn_clicked()
{
    SignUpDialog = new class SignUpDialog;
    SignUpDialog->show();
}


void AccountWindow::on_ReturnBtn_triggered()
{
    parentWidget()->show();
}

