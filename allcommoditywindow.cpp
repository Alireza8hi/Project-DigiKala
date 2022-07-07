#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);

//    for (int i = 0 ; i < 10 ; i++)
//    {
//        ui->tableWidget->insertRow(i);
//        ui->tableWidget->setItem(0 , 0 , new QTableWidgetItem("GGGGG"));
//    }

}

AllCommodityWindow::~AllCommodityWindow()
{
    delete ui;
}

void AllCommodityWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

