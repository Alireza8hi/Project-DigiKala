#include "searchdialog.h"
#include "allcommoditywindow.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);

    ui->PriceRangeLbl->hide();
    ui->PriceRangeLbl2->hide();
    ui->MaxPriceLE->hide();
    ui->MinPriceLE->hide();
    ui->CategoryCombo->hide();
    ui->InStockCB->hide();
    ui->CategoryLbl->hide();
    ui->IDLe->hide();
    ui->ElectricCB->hide();

    ui->MinPriceLE->setInputMask("000000000");
    ui->MaxPriceLE->setInputMask("000000000");

}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_ReturnBtn_clicked()
{
    this->deleteLater();
    parentWidget()->show();
}


void SearchDialog::on_ShowOptionsBtn_clicked()
{
    if(ui->InStockCB->isHidden() == true)
    {
        ui->PriceRangeLbl->show();
        ui->PriceRangeLbl2->show();
        ui->MaxPriceLE->show();
        ui->MinPriceLE->show();
        ui->CategoryCombo->show();
        ui->InStockCB->show();
        ui->CategoryLbl->show();
        ui->IDLe->show();
        ui->ElectricCB->show();
    }
    else
    {
        ui->PriceRangeLbl->hide();
        ui->PriceRangeLbl2->hide();
        ui->MaxPriceLE->hide();
        ui->MinPriceLE->hide();
        ui->CategoryCombo->hide();
        ui->InStockCB->hide();
        ui->CategoryLbl->hide();
        ui->IDLe->hide();
        ui->ElectricCB->hide();
    }

}


void SearchDialog::on_ExitBtn_clicked()
{
    this->close();
}


void SearchDialog::on_SearchBtn_clicked()
{
    bool elcectric=false , available=false;
    long max_cast=100000000;
    long min_cast=0;
    if(this->ui->InStockCB->isChecked())
    {
        available=true;
    }
    if(this->ui->ElectricCB->isChecked())
    {
        elcectric=true;
    }

    this->close();
    AllCommodityWindow *a = new AllCommodityWindow(this ,"" , false,false,0,"all",100000000 , 0);
    a->show();
}

