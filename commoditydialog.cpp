#include "commoditydialog.h"
#include "Digikala.h"
#include "messagesdialog.h"
#include "ui_commoditydialog.h"

CommodityDialog::CommodityDialog(int number,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommodityDialog)
{
    this_commodity = &commodity[number];
    ui->setupUi(this);
    ui->Description->hide();
    ui->NameLbl->setText(QString::fromStdString(this_commodity->get_name()));
    ui->Description->setText(QString::fromStdString(this_commodity->get_description()));
    ui->ColorLbl->setText(QString::fromStdString(this_commodity->get_color()));
    ui->NumberLbl->setText(QString::number(this_commodity->get_number()));
    ui->PriceLbl->setText(QString::number(this_commodity->get_cost()));
    ui->SellerLbl->setText(QString::fromStdString(this_commodity->get_owner()));
    ui->CompanyLbl->setText(QString::fromStdString(this_commodity->get_company()));
    ui->label_4->setText(QString::number(this_commodity->get_id()));
    ui->label_11->setText(QString::number(this_commodity->get_discount_percent()));
    if(this_commodity->get_category()=="e_amusement")
    {
        ui->CategoryLbl->setText("سرگرمی:برقی");
    }
    else if(this_commodity->get_category()=="non_e_amusement")
    {
        ui->CategoryLbl->setText("سرگرمی:غیر برقی");
    }
    else if(this_commodity->get_category()=="dig_applinace")
    {
        ui->CategoryLbl->setText("لوازم دیجیتالی:اصلی");
    }
    else if(this_commodity->get_category()=="dig_accessory")
    {
        ui->CategoryLbl->setText("لوازم دیجیتالی:جانبی");
    }
    else if(this_commodity->get_category()=="furniture")
    {
        ui->CategoryLbl->setText("خانه:مبلمان");
    }
    else if(this_commodity->get_category()=="kit_applinace")
    {
        ui->CategoryLbl->setText("خانه:لوازم آشپزخانه");
    }
    else if(this_commodity->get_category()=="e_applinace")
    {
        ui->CategoryLbl->setText("خانه:لوازم برقی");
    }
    else if(this_commodity->get_category()=="clothing")
    {
        ui->CategoryLbl->setText("پوشاک");
    }
    else if(this_commodity->get_category()=="stationery")
    {
        ui->CategoryLbl->setText("لوازم التحریر");
    }
    else if(this_commodity->get_category()=="book")
    {
        ui->CategoryLbl->setText("کتاب");
    }
    else if(this_commodity->get_category()=="food")
    {
        ui->CategoryLbl->setText("خوراکی");
    }
    else if(this_commodity->get_category()=="b_h_supply")
    {
        ui->CategoryLbl->setText("لوازم زیبایی و بهداشتی");
    }
    else if(this_commodity->get_category()=="mu_instrument")
    {
        ui->CategoryLbl->setText("لوازم موسیقی");
    }
    else
    {
        ui->CategoryLbl->setText("وسایل پزشکی");
    }
}

CommodityDialog::~CommodityDialog()
{
    delete ui;
}

void CommodityDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}


void CommodityDialog::on_pushButton_clicked()
{
    if (ui->Description->isHidden() == true)
    {
        ui->Description->show();
    }
    else
    {
        ui->Description->hide();
    }
}


void CommodityDialog::on_CommentsBtn_clicked()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

