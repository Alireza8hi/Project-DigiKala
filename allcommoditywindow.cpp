#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    for(int i=0 ; i<commodity.size() ; i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(commodity.at(i).get_name())));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(commodity.at(i).get_cost())));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(commodity.at(i).get_number())));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(commodity.at(i).get_id())));
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

