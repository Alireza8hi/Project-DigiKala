#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent , string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity,long max_cost,int min_cost) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);

    deque<Commodity> commodity=site.show_commodity(name_commodity,elcectric,available,id_commodity ,category_commodity,max_cost,min_cost);
    ui->tableWidget->setColumnCount(commodity.size());
    for(int i=0 ; i<commodity.size() ; i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(commodity.at(i).get_name())));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(commodity.at(i).get_cost()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(commodity.at(i).get_number()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(commodity.at(i).get_id()));
    }
}
AllCommodityWindow::~AllCommodityWindow()
{
    delete ui;
}

void AllCommodityWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

