#include "StoreAdminWindow.h"
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
