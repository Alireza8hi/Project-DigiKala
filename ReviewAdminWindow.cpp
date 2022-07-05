#include "ReviewAdminWindow.h"
#include "CartDialog.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_ReviewAdminWindow.h"

ReviewAdminWindow::ReviewAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReviewAdminWindow)
{
    ui->setupUi(this);
}

ReviewAdminWindow::~ReviewAdminWindow()
{
    delete ui;
}

void ReviewAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void ReviewAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

void ReviewAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void ReviewAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}



void ReviewAdminWindow::on_AllCommoditiesBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void ReviewAdminWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

void ReviewAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}

