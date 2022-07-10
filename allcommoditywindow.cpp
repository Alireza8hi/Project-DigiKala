#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(commodity.size());
    for(int i=0 ; i<1 ; i++)
    {
        ui->tableWidget->insertRow(4);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(commodity.at(i).get_name())));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(commodity.at(i).get_cost()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(commodity.at(i).get_number()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(commodity.at(i).get_id()));
    }
    return;
}
AllCommodityWindow::~AllCommodityWindow()
{
    delete ui;
}

void AllCommodityWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

