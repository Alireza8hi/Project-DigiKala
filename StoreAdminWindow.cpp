#include "StoreAdminWindow.h"
#include "CartDialog.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "editcommoditydialog.h"
#include "listofcommoditiesdialog.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_StoreAdminWindow.h"
#include "wishlistdialog.h"

StoreAdminWindow::StoreAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StoreAdminWindow)
{
    ui->setupUi(this);

    ui->DeletetingCommodityConfirmBtn->hide();
    ui->DeletetingCommodityLe->hide();

    ui->EditCommodityConfirmBtn->hide();
    ui->SellCommodityBtn->hide();

    ui->EditCommodityConfirmBtn->hide();
    ui->EditCommodityLe->hide();

    ui->EditCommodityLe->setInputMask("00000000000");
}

StoreAdminWindow::~StoreAdminWindow()
{
    delete ui;
}

void StoreAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void StoreAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

void StoreAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void StoreAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}



void StoreAdminWindow::on_AllCommoditiesBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void StoreAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void StoreAdminWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void StoreAdminWindow::on_DeleteCommoditiesBtn_clicked()
{
    this->close();
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void StoreAdminWindow::on_DeletedCommoditiesBtn_clicked()
{
    this->close();
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void StoreAdminWindow::on_CommoditiesExpireBtn_clicked()
{
    this->close();
    ListOFCommoditiesDialog *a = new ListOFCommoditiesDialog(this);
    a->show();
}


void StoreAdminWindow::on_DeletetingCommodityBtn_clicked()
{
    if (ui->DeletetingCommodityConfirmBtn->isHidden() == true)
    {
        ui->DeletetingCommodityConfirmBtn->show();
        ui->DeletetingCommodityLe->show();
    }
    else
    {
        ui->DeletetingCommodityConfirmBtn->hide();
        ui->DeletetingCommodityLe->hide();
    }
}


void StoreAdminWindow::on_SellCommodityBtn_clicked()
{
    EditCommodityDialog *a = new EditCommodityDialog(this);
    a->show();
}


void StoreAdminWindow::on_EditCommodityBtn_clicked()
{
    if (ui->EditCommodityConfirmBtn->isHidden() == true)
    {
        ui->EditCommodityConfirmBtn->show();
        ui->EditCommodityLe->show();
    }
    else
    {
        ui->EditCommodityConfirmBtn->hide();
        ui->EditCommodityLe->hide();
    }
}


void StoreAdminWindow::on_EditCommodityConfirmBtn_clicked()
{
    EditCommodityDialog *a = new EditCommodityDialog(this , ui->EditCommodityLe->text().toInt());
    a->show();
}

