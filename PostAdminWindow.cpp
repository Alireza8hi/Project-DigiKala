#include "PostAdminWindow.h"
#include "CartDialog.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_PostAdminWindow.h"

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
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void PostAdminWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}


void PostAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}

