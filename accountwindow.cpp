#include <QLabel>
#include <QMessageBox>
#include <QDateTime>
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
#include "user.h"


AccountWindow::AccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this);
    this->setPalette(QColorConstants::Svg::lightgray);

    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);

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
    if (ui->UserNameLe->isHidden() == true)
    {
        ui->UserNameLe->setHidden(false);
        ui->PassLe->setHidden(false);
        ui->UserSignInBtn->setHidden(false);
    }
    if(ui->UserNameLe->text().isEmpty() == false || (ui->PassLe->text().isEmpty() == false))
    {
        ui->UserNameLe->clear();
        ui->PassLe->clear();
    }
    ui->UserNameLe->setGeometry(ui->UserNameLe->x() , 299 , ui->UserNameLe->width() , ui->UserNameLe->height());
    ui->PassLe->setGeometry(ui->PassLe->x() , 379 , ui->PassLe->width() , ui->PassLe->height());
    ui->UserSignInBtn->setGeometry(ui->UserSignInBtn->x() , 379 , ui->UserSignInBtn->width() , ui->UserSignInBtn->height());
    ui->AdminBtn->setGeometry(ui->AdminBtn->x() , 460 , ui->AdminBtn->width() , ui->AdminBtn->height());
}


void AccountWindow::on_AdminBtn_clicked()
{
    if (ui->UserNameLe->isHidden() == true)
    {
        ui->UserNameLe->setHidden(false);
        ui->PassLe->setHidden(false);
        ui->UserSignInBtn->setHidden(false);
    }
    if(ui->UserNameLe->text().isEmpty() == false || (ui->PassLe->text().isEmpty() == false))
    {
        ui->UserNameLe->clear();
        ui->PassLe->clear();
    }
    ui->UserNameLe->setGeometry(ui->UserNameLe->x() , 380 , ui->UserNameLe->width() , ui->UserNameLe->height());
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


void AccountWindow::on_UserSignInBtn_clicked()
{
    FILE *fuser;
    user checkpassword;
    int login=0;
    fuser=fopen("user.txt","r+");
    if(fuser==NULL)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok|QMessageBox::Cancel);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
        fclose(fuser);
    }
    else
    {
        while(fuser!=NULL)
        {
        fread(&checkpassword,sizeof(user),1,fuser);
        if(checkpassword.get_username()==ui->UserNameLe->text() && checkpassword.get_password()==ui->PassLe->text())
            {
            // برابر قرار دادن اطلاعات با user
            login=1;
            fclose(fuser);
            break;
            }
        }
        if(login)
        {
            QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok|QMessageBox::Cancel);
            msg_error->show();
            connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
        }
        else
        {
            if(checkpassword.get_role()=="customer")
            {
                // بخش مشتری باز شود
            }
            else
                if(checkpassword.get_role()=="sellerr")
                {
                    //بخش فروشنده باز شود
                }
                else
                {
                    //بخش ادمین باز شود
                }
        }
    }
}
