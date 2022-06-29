#include <QLabel>
#include <QMessageBox>
#include <QDateTime>
#include "mainwindow.h"
#include "qobjectdefs.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "accountwindow.h"
#include "User.h"
#include "CustomerWindow.h"
#include "SellerWindow.h"
#include "MainAdminWindow.h"
#include "Digikala.h"
#include "ui_accountwindow.h"
#include "PostAdminWindow.h"
#include "SupportAdminWindow.h"
#include "StoreAdminWindow.h"
#include "ReviewAdminWindow.h"

User userglobal;

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
    FILE *fuser=nullptr;
    int pos1=1,pos2=2;
    User checkpassword;
    int login=0;
    fuser=fopen("User.txt","r+");
    if(fuser==NULL)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok|QMessageBox::Cancel , this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
        fclose(fuser);
    }
    else
    {
        fseek(fuser,0,SEEK_END);
        pos1=ftell(fuser);
        fseek(fuser,0,SEEK_SET);
        while(pos2<pos1)
        {
        //fread(&checkpassword,sizeof(User),1,fuser);
        checkpassword.readuser(fuser);
        pos2=ftell(fuser);
        if(checkpassword.get_username()==ui->UserNameLe->text() && checkpassword.get_password()==ui->PassLe->text())
            {
            userglobal=checkpassword;
            login=1;
            fclose(fuser);
            break;
            }
        }
        if(login==0)
        {
            QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok|QMessageBox::Cancel, this);
            msg_error->show();
            connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
            fclose(fuser);
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
            else if(checkpassword.get_role()=="main_admin")
            {
                    MainAdminWindow* main_admin_window = new class MainAdminWindow(this);
                    main_admin_window->show();
            }
            else if(checkpassword.get_role()=="post_admin")
            {
                PostAdminWindow* post_admin_window = new class PostAdminWindow(this);
                post_admin_window->show();
            }
            else if(checkpassword.get_role()=="support_admin")
            {
                SupportAdminWindow* support_admin_window = new class SupportAdminWindow(this);
                support_admin_window->show();
            }
            else if(checkpassword.get_role()=="store_admin")
            {
                StoreAdminWindow* store_admin_window = new class StoreAdminWindow(this);
                store_admin_window->show();
            }
            else if(checkpassword.get_role()=="review_admin")
            {
                ReviewAdminWindow* review_admin_window = new class ReviewAdminWindow(this);
                review_admin_window->show();
            }
        }
    }
}
