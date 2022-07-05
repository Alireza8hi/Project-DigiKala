#include "StoreAdminWindow.h"
#include "CartDialog.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_StoreAdminWindow.h"

StoreAdminWindow::StoreAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StoreAdminWindow)
{
    ui->setupUi(this);
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


void StoreAdminWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

void StoreAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}

