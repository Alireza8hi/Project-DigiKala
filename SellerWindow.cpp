#include "SellerWindow.h"
#include "CartDialog.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "editcommoditydialog.h"
#include "listofcommoditiesdialog.h"
#include "mainwindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_SellerWindow.h"
#include "wishlistdialog.h"

SellerWindow::SellerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SellerWindow)
{
    ui->setupUi(this);
}

SellerWindow::~SellerWindow()
{
    delete ui;
}


void SellerWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void SellerWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

void SellerWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void SellerWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}



void SellerWindow::on_AllCommoditiesBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

void SellerWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void SellerWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void SellerWindow::on_DeletedCommoditieBtn_clicked()
{
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void SellerWindow::on_CommoditiesExpireBtn_clicked()
{
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void SellerWindow::on_SellCommodityBtn_clicked()
{
    EditCommodityDialog *a = new EditCommodityDialog(this);
    a->show();
}


void SellerWindow::on_SignOutBtn_triggered()
{
    MainWindow *a = new MainWindow(this);
    this_user = nullptr;
    a->show();
}

