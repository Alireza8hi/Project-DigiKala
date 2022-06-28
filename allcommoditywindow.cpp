#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);
}

AllCommodityWindow::~AllCommodityWindow()
{
    delete ui;
}
