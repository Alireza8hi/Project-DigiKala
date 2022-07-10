#include "mainwindow.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "accountwindow.h"
#include "ui_categorywindow.h"
#include <QLineEdit>
#include <QDateTime>
#include <QWidget>
#include <QLabel>

CategoryWindow::CategoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CategoryWindow)
{
    ui->setupUi(this);

    QString d = QDate::currentDate().toString();
    QLabel *label= new QLabel(d);
    ui->statusbar->addWidget(label);

    ui->ElectricBtn->setHidden(true);
    ui->NonElectricBtn->setHidden(true);

    ui->SubAccessoriesBtn->setHidden(true);
    ui->MainAccessoriesBtn->setHidden(true);

    ui->FurnitureBtn->setHidden(true);
    ui->KitchenBtn->setHidden(true);
    ui->HomeElectricBtn->setHidden(true);

}

CategoryWindow::~CategoryWindow()
{
    delete ui;
}

void CategoryWindow::on_ReturnBtn_triggered()
{
    parentWidget()->show();
}


void CategoryWindow::on_EntertainmentBtn_clicked()
{
    if (ui->ElectricBtn->isHidden() == true)
    {
        ui->ElectricBtn->setHidden(false);
        ui->NonElectricBtn->setHidden(false);
    }
    else
    {
        ui->ElectricBtn->setHidden(true);
        ui->NonElectricBtn->setHidden(true);
    }

}


void CategoryWindow::on_ElectronicsBtn_clicked()
{
    if (ui->SubAccessoriesBtn->isHidden() == true)
    {
        ui->SubAccessoriesBtn->setHidden(false);
        ui->MainAccessoriesBtn->setHidden(false);
    }
    else
    {
        ui->SubAccessoriesBtn->setHidden(true);
        ui->MainAccessoriesBtn->setHidden(true);
    }

}


void CategoryWindow::on_HomeBtn_clicked()
{
    if (ui->FurnitureBtn->isHidden() == true)
    {
        ui->FurnitureBtn->setHidden(false);
        ui->KitchenBtn->setHidden(false);
        ui->HomeElectricBtn->setHidden(false);
    }
    else
    {
        ui->FurnitureBtn->setHidden(true);
        ui->KitchenBtn->setHidden(true);
        ui->HomeElectricBtn->setHidden(true);
    }

}


void CategoryWindow::on_ElectricBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"e_amusement",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_NonElectricBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"non_e_amusement",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_MainAccessoriesBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"dig_applinace",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_SubAccessoriesBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"dig_accessory",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_FurnitureBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"furniture",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_KitchenBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"kit_applinace",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_HomeElectricBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"e_applinace",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_ClothesBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"clothing",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_StationeryBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"stationery",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_MusicBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"mu_instrument",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_BookBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"book",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_MedicalBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"me_equipment",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_EdibleBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"food",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}


void CategoryWindow::on_BeautyAndPersonalCareBtn_clicked()
{
    this->close();
    site.show_commodity("",false,false,0,"b_h_supply",100000000 , 0);
    AllCommodityWindow *a = new AllCommodityWindow(this );
    a->show();
}

