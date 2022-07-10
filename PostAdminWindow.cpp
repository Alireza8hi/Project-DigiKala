#include "PostAdminWindow.h"
#include "CartDialog.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "commoditiesawaitingpostdialog.h"
#include "mainwindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_PostAdminWindow.h"
#include "wishlistdialog.h"

PostAdminWindow::PostAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PostAdminWindow)
{
    ui->setupUi(this);
}

PostAdminWindow::~PostAdminWindow()
{
    delete ui;
}

void PostAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void PostAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

void PostAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void PostAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}


void PostAdminWindow::on_AllCommoditiesBtn_clicked()
{
    site.show_commodity("" , false,false,0,"all",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void PostAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void PostAdminWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void PostAdminWindow::on_CommoditiesAwaitingPostBtn_clicked()
{
    CommoditiesAwaitingPostDialog *a = new CommoditiesAwaitingPostDialog(this);
    a->show();
}


void PostAdminWindow::on_SignOutBtn_triggered()
{
    MainWindow *a = new MainWindow(this);
    this_user = nullptr;
    a->show();
}

