#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent , string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity,long max_cost,int min_cost) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);


//    ui->tableWidget->setColumnCount(4);
//    for(int i=0 ; i<10 ; i++)
//    {
//        ui->tableWidget->insertRow(i);
//        ui->tableWidget->setItem(i,0,new QTableWidgetItem("نام کالا"));
//        ui->tableWidget->setItem(i,1,new QTableWidgetItem("قیمت"));
//        ui->tableWidget->setItem(i,2,new QTableWidgetItem("تعداد"));
//        ui->tableWidget->setItem(i,3,new QTableWidgetItem("کد"));
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

