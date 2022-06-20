#include "categorywindow.h"
#include "ui_categorywindow.h"

CategoryWindow::CategoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CategoryWindow)
{
    ui->setupUi(this);
}

CategoryWindow::~CategoryWindow()
{
    delete ui;
}
