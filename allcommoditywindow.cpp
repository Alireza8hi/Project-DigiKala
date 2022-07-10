#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent , string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity,long max_cost,int min_cost) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);


//    ui->tableWidget->setColumnCount(4);
//    ui->tableWidget->setItem(1,1,new QTableWidgetItem("ss"));
//    for(int i=0 ; i<10 ; i++)
//    {
//        ui->tableWidget->insertRow(i);
//        for(int j=0 ; j<4 ; j++)
//        {
//            ui->tableWidget->setItem(i,j,new QTableWidgetItem("GG"));
//        }
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

