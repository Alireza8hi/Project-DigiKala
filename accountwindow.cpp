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
#include <QThread>

using namespace std;

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
    bool isTrue = false;
    if(ui->UserNameLe->text()==site->get_main_admin()->get_username() && ui->PassLe->text()==site->get_main_admin()->get_password())
    {
        isTrue = true;
        MainAdminWindow* main_admin_window = new class MainAdminWindow(this);
        QThread* th1 = new QThread();
        main_admin_window->moveToThread(th1);
        th1->start();
        connect(th1,&QThread::started,main_admin_window,&MainAdminWindow::show);
        connect(main_admin_window,&MainAdminWindow::destroyed,th1,&QThread::quit);
        connect(main_admin_window,&MainAdminWindow::destroyed,main_admin_window,&MainAdminWindow::deleteLater);
        connect(th1,&QThread::finished,th1,&QThread::deleteLater);
    }
    if(ui->UserNameLe->text()==site->get_review_admin()->get_username() && ui->PassLe->text()==site->get_review_admin()->get_password())
    {
        isTrue = true;
        ReviewAdminWindow* review_admin_window = new class ReviewAdminWindow(this);
        QThread* th1 = new QThread();
        review_admin_window->moveToThread(th1);
        th1->start();
        connect(th1,&QThread::started,review_admin_window,&ReviewAdminWindow::show);
        connect(review_admin_window,&ReviewAdminWindow::destroyed,th1,&QThread::quit);
        connect(review_admin_window,&ReviewAdminWindow::destroyed,review_admin_window,&ReviewAdminWindow::deleteLater);
        connect(th1,&QThread::finished,th1,&QThread::deleteLater);
    }
    for(int counter=0;counter<31;counter++)
    {
        if(ui->UserNameLe->text()==site->get_post_admin(counter).get_username() && ui->PassLe->text()==site->get_post_admin(counter).get_password())
        {
            isTrue = true;
            PostAdminWindow* post_admin_window = new class PostAdminWindow(this);
            QThread* th1 = new QThread();
            post_admin_window->moveToThread(th1);
            th1->start();
            connect(th1,&QThread::started,post_admin_window,&PostAdminWindow::show);
            connect(post_admin_window,&PostAdminWindow::destroyed,th1,&QThread::quit);
            connect(post_admin_window,&PostAdminWindow::destroyed,post_admin_window,&PostAdminWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        }
    }
    for(int counter=0;counter<site->get_num_of_support_admin();counter++)
    {
        if(ui->UserNameLe->text()==site->get_support_admin(counter)->get_username() && ui->PassLe->text()==site->get_support_admin(counter)->get_password())
        {
            isTrue = true;
            SupportAdminWindow* support_admin_window = new class SupportAdminWindow(this);
            QThread* th1 = new QThread();
            support_admin_window->moveToThread(th1);
            th1->start();
            connect(th1,&QThread::started,support_admin_window,&SupportAdminWindow::show);
            connect(support_admin_window,&SupportAdminWindow::destroyed,th1,&QThread::quit);
            connect(support_admin_window,&SupportAdminWindow::destroyed,support_admin_window,&SupportAdminWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        }
    }
    for(int counter=0;counter<site->get_num_of_store_admin();counter++)
    {
        if(ui->UserNameLe->text()==site->get_store_admin(counter)->get_username() && ui->PassLe->text()==site->get_store_admin(counter)->get_password())
        {
            isTrue = true;
            StoreAdminWindow* store_admin_window = new class StoreAdminWindow(this);
            QThread* th1 = new QThread();
            store_admin_window->moveToThread(th1);
            th1->start();
            connect(th1,&QThread::started,store_admin_window,&StoreAdminWindow::show);
            connect(store_admin_window,&StoreAdminWindow::destroyed,th1,&QThread::quit);
            connect(store_admin_window,&StoreAdminWindow::destroyed,store_admin_window,&StoreAdminWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        }
    }
    for(int counter=0;counter<site->get_num_of_seller();counter++)
    {
        if(ui->UserNameLe->text()==site->get_seller(counter)->get_username() && ui->PassLe->text()==site->get_seller(counter)->get_password())
        {
            isTrue = true;
            SellerWindow* seller_window = new class SellerWindow(this);
            QThread* th1 = new QThread();
            seller_window->moveToThread(th1);
            th1->start();
            connect(th1,&QThread::started,seller_window,&SellerWindow::show);
            connect(seller_window,&SellerWindow::destroyed,th1,&QThread::quit);
            connect(seller_window,&SellerWindow::destroyed,seller_window,&SellerWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        }
    }
    for(int counter=0;counter<site->get_num_of_customer();counter++)
    {
        if(ui->UserNameLe->text()==site->get_customer(counter)->get_username() && ui->PassLe->text()==site->get_customer(counter)->get_password())
        {
            isTrue = true;
            CustomerWindow* customer_window = new class CustomerWindow(this);
            QThread* th1 = new QThread();
            customer_window->moveToThread(th1);
            th1->start();
            connect(th1,&QThread::started,customer_window,&CustomerWindow::show);
            connect(customer_window,&CustomerWindow::destroyed,th1,&QThread::quit);
            connect(customer_window,&CustomerWindow::destroyed,customer_window,&CustomerWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        }
    }
    if (isTrue!=true)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username ",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    return;
}

/*void AccountWindow::on_UserSignInBtn_clicked()
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
<<<<<<< HEAD
}*/
