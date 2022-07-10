#include "CustomerWindow.h"
#include "CartDialog.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "mainwindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_CustomerWindow.h"
#include "wishlistdialog.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}


void CustomerWindow::on_AllCommodityBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void CustomerWindow::on_CategoryBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void CustomerWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}

void CustomerWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void CustomerWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}


void CustomerWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void CustomerWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void CustomerWindow::on_SignOutAct_triggered()
{
    MainWindow *a = new MainWindow(this);
    this_user = nullptr;
    a->show();
}


void CustomerWindow::on_DeleteAccountAct_triggered()
{
    site.set_num_of_customer(site.get_num_of_customer()-1);
    site.set_num_of_users(site.get_num_of_users()-1);
    this_user->set_username(site.get_user(site.get_num_of_users()).get_username());
    this_user->set_password(site.get_user(site.get_num_of_users()).get_password());
    this_user->set_role(site.get_user(site.get_num_of_users()).get_role());
    this_user->set_income(site.get_user(site.get_num_of_users()).get_income());
    this_user->set_name(site.get_user(site.get_num_of_users()).get_name());
    this_user->set_family(site.get_user(site.get_num_of_users()).get_family());
    this_user->set_email(site.get_user(site.get_num_of_users()).get_email());
    this_user->set_address(site.get_user(site.get_num_of_users()).get_address());
    this_user->set_ncode(site.get_user(site.get_num_of_users()).get_ncode());
    this_user->set_phone_number(site.get_user(site.get_num_of_users()).get_phone_number());
    this_user->set_city(site.get_user(site.get_num_of_users()).get_city());
    this_user->set_province(site.get_user(site.get_num_of_users()).get_province());
    this_user->set_sex(site.get_user(site.get_num_of_users()).get_sex());
    this_user->set_money_paid(site.get_user(site.get_num_of_users()).get_money_paid());
    this_user->set_num_of_commodity_purchased(site.get_user(site.get_num_of_users()).get_num_of_commodity_purchased());
    for(int counter=0;counter<100;counter++)
    {
        this_user->set_favorites_id(counter,site.get_user(site.get_num_of_users()).get_favorites_id(counter));
        this_user->set_buy_list_id(counter,site.get_user(site.get_num_of_users()).get_buy_list_id(counter));
    }
    site.get_user(site.get_num_of_users()).set_password("");
    site.get_user(site.get_num_of_users()).set_username("");
    site.get_user(site.get_num_of_users()).set_role("");
    site.get_user(site.get_num_of_users()).set_income(0);
    site.get_user(site.get_num_of_users()).set_money_paid(0);
    site.get_user(site.get_num_of_users()).set_num_of_commodity_purchased(0);
    site.get_user(site.get_num_of_users()).set_name("Guest");
    site.get_user(site.get_num_of_users()).set_family("Guest");
    site.get_user(site.get_num_of_users()).set_email("Guest@gmail.com");
    site.get_user(site.get_num_of_users()).set_address("-");
    site.get_user(site.get_num_of_users()).set_phone_number("0");
    site.get_user(site.get_num_of_users()).set_ncode("0");
    site.get_user(site.get_num_of_users()).set_city("-");
    site.get_user(site.get_num_of_users()).set_province("-");
    site.get_user(site.get_num_of_users()).set_sex(0);
    site.write_digi_kala("DataBase.data",0);
    MainWindow *a = new MainWindow(this);
    this_user = nullptr;
    a->show();
    QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"Success","Done",QMessageBox::Ok,this);
    msg_error->show();
    connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
}

