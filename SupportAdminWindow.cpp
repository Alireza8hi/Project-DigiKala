#include "SupportAdminWindow.h"
#include "CartDialog.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "listofcommoditiesdialog.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_SupportAdminWindow.h"
#include "wishlistdialog.h"

SupportAdminWindow::SupportAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SupportAdminWindow)
{
    ui->setupUi(this);
}

SupportAdminWindow::~SupportAdminWindow()
{
    delete ui;
}

void SupportAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void SupportAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

void SupportAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void SupportAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}



void SupportAdminWindow::on_AllCommoditiesBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

void SupportAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}

void SupportAdminWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void SupportAdminWindow::on_DeletedCommoditieBtn_clicked()
{
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void SupportAdminWindow::on_ComplaintListBtn_clicked()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}


void SupportAdminWindow::on_CheckCommentBtn_clicked()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

