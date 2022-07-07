#include "MainAdminWindow.h"
#include "CartDialog.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "listofpeopledialog.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_MainAdminWindow.h"
#include "wishlistdialog.h"

MainAdminWindow::MainAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainAdminWindow)
{
    ui->setupUi(this);

    ui->OpenOtherAdminsCombo->hide();
    ui->OpenOtherAdminsConfirmBtn->hide();

    ui->ChangeAdminIncomeConfirmBtn->hide();
    ui->ChangeAdminIncomeLe->hide();
    ui->ChangeAdminIncomeCombo->hide();

    ui->RemoveAdminCombo->hide();
    ui->RemoveAdminConfirmBtn->hide();

    ui->AddAdminConfirmBtn->hide();
    ui->AddAdminUserLe->hide();
    ui->AddAdminPassLe->hide();
    ui->AddAdminCombo->hide();

    ui->CommodityProfitLbl->hide();
}

MainAdminWindow::~MainAdminWindow()
{
    delete ui;
}

void MainAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void MainAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}


void MainAdminWindow::on_AllCommoditysBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

void MainAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void MainAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}


void MainAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void MainAdminWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void MainAdminWindow::on_OpenOtherAdminsBtn_clicked()
{
    if(ui->OpenOtherAdminsCombo->isHidden() == true)
    {
        ui->OpenOtherAdminsCombo->show();
        ui->OpenOtherAdminsConfirmBtn->show();
    }
    else
    {
        ui->OpenOtherAdminsCombo->hide();
        ui->OpenOtherAdminsConfirmBtn->hide();
    }

}


void MainAdminWindow::on_ChangeAdminIncomeBtn_clicked()
{
    if(ui->OpenOtherAdminsCombo->isHidden() == true)
    {
        ui->ChangeAdminIncomeConfirmBtn->show();
        ui->ChangeAdminIncomeLe->show();
        ui->ChangeAdminIncomeCombo->show();
    }
    else
    {
        ui->ChangeAdminIncomeConfirmBtn->hide();
        ui->ChangeAdminIncomeLe->hide();
        ui->ChangeAdminIncomeCombo->hide();
    }
}


void MainAdminWindow::on_RemoveAdminBtn_clicked()
{
    if(ui->OpenOtherAdminsCombo->isHidden() == true)
    {
        ui->RemoveAdminCombo->show();
        ui->RemoveAdminConfirmBtn->show();
    }
    else
    {
        ui->RemoveAdminCombo->hide();
        ui->RemoveAdminConfirmBtn->hide();
    }
}


void MainAdminWindow::on_AddAdminBtn_clicked()
{
    if(ui->AddAdminCombo->isHidden() == true)
    {
        ui->AddAdminConfirmBtn->show();
        ui->AddAdminUserLe->show();
        ui->AddAdminPassLe->show();
        ui->AddAdminCombo->show();
    }
    else
    {
        ui->AddAdminConfirmBtn->hide();
        ui->AddAdminUserLe->hide();
        ui->AddAdminPassLe->hide();
        ui->AddAdminCombo->hide();
    }
}


void MainAdminWindow::on_SuccessfulSellersBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_BestCustomersBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_ReadUserInfoBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_CommodityProfitBtn_clicked()
{
    if(ui->CommodityProfitLbl->isHidden() == true)
    {
        ui->CommodityProfitLbl->show();
    }
    else
    {
        ui->CommodityProfitLbl->hide();
    }
}


void MainAdminWindow::on_SoldCommoditiesBtn_clicked()
{
    this->close();
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

