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
#include "User.h"
#include "CustomerWindow.h"
#include "SellerWindow.h"
#include "MainAdminWindow.h"
#include "Digikala.h"

AccountWindow::AccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this);

    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);

}

AccountWindow::~AccountWindow()
{
    delete ui;
}

void AccountWindow::on_SignUpBtn_clicked()
{
    SignUpDialog = new class SignUpDialog(this);
    SignUpDialog->show();
}


void AccountWindow::on_ReturnBtn_triggered()
{
    parentWidget()->show();
}


void AccountWindow::on_UserSignInBtn_clicked()
{
    FILE *fuser;
    User checkpassword;
    int login=0;
    fuser=fopen("User.txt","r+");
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
        fread(&checkpassword,sizeof(User),1,fuser);
        if(checkpassword.get_username()==ui->UserNameLe->text() && checkpassword.get_password()==ui->PassLe->text())
            {
            //userglobal=checkpassword;
            login=1;
            fclose(fuser);
            break;
            }
        }
        if(login==0)
        {
            QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok|QMessageBox::Cancel);
            msg_error->show();
            connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
        }
        else
        {
            if(checkpassword.get_role()=="customer")
            {
                CustomerWindow* customer_window = new class CustomerWindow(this);
                customer_window->show();
            }
            else if(checkpassword.get_role()=="seller")
            {
                    SellerWindow* seller_window = new class SellerWindow(this);
                    seller_window->show();
            }
            else if(checkpassword.get_role()=="mainadmin")
            {
                    MainAdminWindow* main_admin_window = new class MainAdminWindow(this);
                    main_admin_window->show();
            }
            else if(checkpassword.get_role()=="selladmin")
            {
                //
            }
        }
    }
}
