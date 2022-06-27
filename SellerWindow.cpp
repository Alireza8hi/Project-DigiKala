#include "SellerWindow.h"
#include "ui_SellerWindow.h"

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
