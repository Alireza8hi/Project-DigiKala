#include "accountwindow.h"
#include "ui_accountwindow.h"

AccountWindow::AccountWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccountWindow)
{
    ui->setupUi(this);
}

AccountWindow::~AccountWindow()
{
    delete ui;
}
