#include "CustomerWindow.h"
#include "ui_CustomerWindow.h"

CustomerWindow::CustomerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerWindow)
{
    ui->setupUi(this);
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

