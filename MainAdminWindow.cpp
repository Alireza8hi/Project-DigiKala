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

    ui->ChangeAdminIncomeUserLe->setInputMask("000000000000");

    ui->OpenOtherAdminsLe->hide();
    ui->OpenOtherAdminsConfirmBtn->hide();

    ui->ChangeAdminIncomeConfirmBtn->hide();
    ui->ChangeAdminIncomeLe->hide();
    ui->ChangeAdminIncomeUserLe->hide();

    ui->RemoveAdminLe->hide();
    ui->RemoveAdminConfirmBtn->hide();

    ui->AddAdminConfirmBtn->hide();
    ui->AddAdminUserLe->hide();
    ui->AddAdminCombo->hide();

    ui->CommodityProfitLbl->hide();

    ui->ChangeAdminCombo->hide();
    ui->ChangeAdminConfirmBtn->hide();
    ui->CurrentAdminLe->hide();
    ui->NewAdminLe->hide();
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
    if(ui->OpenOtherAdminsLe->isHidden() == true)
    {
        ui->OpenOtherAdminsLe->show();
        ui->OpenOtherAdminsConfirmBtn->show();
    }
    else
    {
        ui->OpenOtherAdminsLe->hide();
        ui->OpenOtherAdminsConfirmBtn->hide();
    }

}


void MainAdminWindow::on_ChangeAdminIncomeBtn_clicked()
{
    if(ui->ChangeAdminIncomeLe->isHidden() == true)
    {
        ui->ChangeAdminIncomeConfirmBtn->show();
        ui->ChangeAdminIncomeLe->show();
        ui->ChangeAdminIncomeUserLe->show();
    }
    else
    {
        ui->ChangeAdminIncomeConfirmBtn->hide();
        ui->ChangeAdminIncomeLe->hide();
        ui->ChangeAdminIncomeUserLe->hide();
    }
}


void MainAdminWindow::on_RemoveAdminBtn_clicked()
{
    if(ui->RemoveAdminLe->isHidden() == true)
    {
        ui->RemoveAdminLe->show();
        ui->RemoveAdminConfirmBtn->show();
    }
    else
    {
        ui->RemoveAdminLe->hide();
        ui->RemoveAdminConfirmBtn->hide();
    }
}


void MainAdminWindow::on_AddAdminBtn_clicked()
{
    if(ui->AddAdminCombo->isHidden() == true)
    {
        ui->AddAdminConfirmBtn->show();
        ui->AddAdminUserLe->show();
        ui->AddAdminCombo->show();
    }
    else
    {
        ui->AddAdminConfirmBtn->hide();
        ui->AddAdminUserLe->hide();
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


void MainAdminWindow::on_ChangeAdminBtn_clicked()
{
    if(ui->ChangeAdminCombo->isHidden() == true)
    {
        ui->ChangeAdminConfirmBtn->show();
        ui->CurrentAdminLe->show();
        ui->NewAdminLe->show();
        ui->ChangeAdminCombo->show();
    }
    else
    {
        ui->ChangeAdminConfirmBtn->hide();
        ui->CurrentAdminLe->hide();
        ui->NewAdminLe->hide();
        ui->ChangeAdminCombo->hide();
    }
}

