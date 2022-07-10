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
    ui->MaxPriceSB->hide();
    ui->MinPriceSB->hide();
    ui->CategoryCombo->hide();
    ui->InStockCB->hide();
    ui->CategoryLbl->hide();
    ui->IDSB->hide();
    ui->ElectricCB->hide();
    ui->label->hide();
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
        ui->MaxPriceSB->show();
        ui->MinPriceSB->show();
        ui->CategoryCombo->show();
        ui->InStockCB->show();
        ui->CategoryLbl->show();
        ui->IDSB->show();
        ui->ElectricCB->show();
        ui->label->show();
    }
    else
    {
        ui->PriceRangeLbl->hide();
        ui->PriceRangeLbl2->hide();
        ui->MaxPriceSB->hide();
        ui->MinPriceSB->hide();
        ui->CategoryCombo->hide();
        ui->InStockCB->hide();
        ui->CategoryLbl->hide();
        ui->IDSB->hide();
        ui->ElectricCB->hide();
        ui->label->hide();
    }

}


void SearchDialog::on_ExitBtn_clicked()
{
    this->close();
}



void SearchDialog::on_SearchBtn_clicked()
{
    bool elcectric=false , available=false;
    string name , category;
    long max_cast=100000000;
    long min_cast=0;
    int id=0;
    if(this->ui->InStockCB->isChecked())
    {
        available=true;
    }
    if(this->ui->ElectricCB->isChecked())
    {
        elcectric=true;
    }
    max_cast=this->ui->MaxPriceSB->value();
    min_cast=this->ui->MinPriceSB->value();
    if(this->ui->IDSB->value()!=10000)
    {
        id=this->ui->IDSB->value();
    }
    if(this->ui->SearcLe->text().size()>0)
    {
        name=this->ui->SearcLe->text().toStdString();
    }
    if(this->ui->CategoryCombo->currentIndex()==9)
    {
        category="e_amusement";
    }
    else if(this->ui->CategoryCombo->currentIndex()==10)
    {
        category="non_e_amusement";
    }
    else if(this->ui->CategoryCombo->currentIndex()==3)
    {
        category="dig_applinace";
    }
    else if(this->ui->CategoryCombo->currentIndex()==4)
    {
        category="dig_accessory";
    }
    else if(this->ui->CategoryCombo->currentIndex()==5)
    {
        category="furniture";
    }
    else if(this->ui->CategoryCombo->currentIndex()==6)
    {
        category="kit_applinace";
    }
    else if(this->ui->CategoryCombo->currentIndex()==7)
    {
        category="e_applinace";
    }
    else if(this->ui->CategoryCombo->currentIndex()==8)
    {
        category="clothing";
    }
    else if(this->ui->CategoryCombo->currentIndex()==12)
    {
        category="stationery";
    }
    else if(this->ui->CategoryCombo->currentIndex()==13)
    {
        category="book";
    }
    else if(this->ui->CategoryCombo->currentIndex()==15)
    {
        category="food";
    }
    else if(this->ui->CategoryCombo->currentIndex()==1)
    {
        category="b_h_supply";
    }
    else if(this->ui->CategoryCombo->currentIndex()==14)
    {
        category="mu_instrument";
    }
    else if(this->ui->CategoryCombo->currentIndex()==11)
    {
        category="me_equipment";
    }
    else if(this->ui->CategoryCombo->currentIndex()==0)
    {
        category="all";
    }
    this->close();
    site.show_commodity(name,elcectric,available,id,category,max_cast ,min_cast);
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

