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

User* this_user;
DigiKala site;

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
    for(int counter=0;counter<site.get_num_of_users();counter++)
    {
        if(ui->UserNameLe->text().toStdString()==site.get_user(counter).get_username() && ui->PassLe->text().toStdString()==site.get_user(counter).get_password())
        {
            this_user = &site.get_user(counter);
            isTrue = true;
            if(this_user->get_role()=="main_admin")
            {
                MainAdminWindow* main_admin_window = new class MainAdminWindow(this);
                QThread* th1 = new QThread();
                main_admin_window->moveToThread(th1);
                connect(th1,&QThread::started,main_admin_window,&MainAdminWindow::show);
                connect(main_admin_window,&MainAdminWindow::destroyed,th1,&QThread::quit);
                connect(main_admin_window,&MainAdminWindow::destroyed,main_admin_window,&MainAdminWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
            else if(this_user->get_role()=="review_admin")
            {
                ReviewAdminWindow* review_admin_window = new class ReviewAdminWindow(this);
                QThread* th1 = new QThread();
                review_admin_window->moveToThread(th1);
                connect(th1,&QThread::started,review_admin_window,&ReviewAdminWindow::show);
                connect(review_admin_window,&ReviewAdminWindow::destroyed,th1,&QThread::quit);
                connect(review_admin_window,&ReviewAdminWindow::destroyed,review_admin_window,&ReviewAdminWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
            else if(this_user->get_role()=="post_admin")
            {
            PostAdminWindow* post_admin_window = new class PostAdminWindow(this);
            QThread* th1 = new QThread();
            post_admin_window->moveToThread(th1);
            connect(th1,&QThread::started,post_admin_window,&PostAdminWindow::show);
            connect(post_admin_window,&PostAdminWindow::destroyed,th1,&QThread::quit);
            connect(post_admin_window,&PostAdminWindow::destroyed,post_admin_window,&PostAdminWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
            connect(th1,&QThread::started,this,&AccountWindow::hide);
            th1->start();
            }
            else if(this_user->get_role()=="support_admin")
            {
                SupportAdminWindow* support_admin_window = new class SupportAdminWindow(this);
                QThread* th1 = new QThread();
                support_admin_window->moveToThread(th1);
                connect(th1,&QThread::started,support_admin_window,&SupportAdminWindow::show);
                connect(support_admin_window,&SupportAdminWindow::destroyed,th1,&QThread::quit);
                connect(support_admin_window,&SupportAdminWindow::destroyed,support_admin_window,&SupportAdminWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
            else if(this_user->get_role()=="store_admin")
            {
                StoreAdminWindow* store_admin_window = new class StoreAdminWindow(this);
                QThread* th1 = new QThread();
                store_admin_window->moveToThread(th1);
                connect(th1,&QThread::started,store_admin_window,&StoreAdminWindow::show);
                connect(store_admin_window,&StoreAdminWindow::destroyed,th1,&QThread::quit);
                connect(store_admin_window,&StoreAdminWindow::destroyed,store_admin_window,&StoreAdminWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
            else if(this_user->get_role()=="seller")
            {
                SellerWindow* seller_window = new class SellerWindow(this);
                QThread* th1 = new QThread();
                seller_window->moveToThread(th1);
                connect(th1,&QThread::started,seller_window,&SellerWindow::show);
                connect(seller_window,&SellerWindow::destroyed,th1,&QThread::quit);
                connect(seller_window,&SellerWindow::destroyed,seller_window,&SellerWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
            else
            {
                CustomerWindow* customer_window = new class CustomerWindow(this);
                QThread* th1 = new QThread();
                customer_window->moveToThread(th1);
                connect(th1,&QThread::started,customer_window,&CustomerWindow::show);
                connect(customer_window,&CustomerWindow::destroyed,th1,&QThread::quit);
                connect(customer_window,&CustomerWindow::destroyed,customer_window,&CustomerWindow::deleteLater);
                connect(th1,&QThread::finished,th1,&QThread::deleteLater);
                connect(th1,&QThread::started,this,&AccountWindow::hide);
                th1->start();
            }
        }
    }
    if (isTrue!=true)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you entered the wrong password or username",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    return;
}

