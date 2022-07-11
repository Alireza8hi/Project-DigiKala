#include "allcommoditywindow.h"
#include "commoditydialog.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    for(int i=b ; i<commodity.size() ; i++)
    {
        ui->tableWidget->insertRow(i-b);
        ui->tableWidget->setItem(i-b,0,new QTableWidgetItem(QString::fromStdString(commodity.at(i).get_name())));
        ui->tableWidget->setItem(i-b,1,new QTableWidgetItem(QString::number(commodity.at(i).get_cost())));
        ui->tableWidget->setItem(i-b,2,new QTableWidgetItem(QString::number(commodity.at(i).get_number())));
        ui->tableWidget->setItem(i-b,3,new QTableWidgetItem(QString::number(commodity.at(i).get_id())));
    }
    b=a;
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


void AllCommodityWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{
    CommodityDialog *a = new CommodityDialog(row);
    a->show();
}

