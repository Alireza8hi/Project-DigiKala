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
            // برابر قرار دادن اطلاعات با User
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
                // بخش مشتری باز شود
                CustomerWindow* customer_window = new class CustomerWindow(this);
                customer_window->show();
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
