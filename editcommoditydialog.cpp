#include "editcommoditydialog.h"
#include "ui_editcommoditydialog.h"
#include "Digikala.h"
#include <stdlib.h>
#include <time.h>

EditCommodityDialog::EditCommodityDialog(QWidget *parent , int a) :
    QDialog(parent),
    ui(new Ui::EditCommodityDialog)
{
    ui->setupUi(this);

    ui->NumberLe->setInputMask("000000");
    ui->CostLe->setInputMask("00000000");
    ui->DiscountPercentLe->setInputMask("00");
    ui->WeightLe->setInputMask("0000");
    ui->VolumeLe->setInputMask("0000");
    ui->ProfitPercentLe->setInputMask("00");
}

EditCommodityDialog::~EditCommodityDialog()
{
    delete ui;
}

void EditCommodityDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}


void EditCommodityDialog::on_ConfirmAndReturnBtn_clicked()
{
    site.get_commodity(site.get_num_of_commodities()).set_owner(this_user->get_username());
    site.get_commodity(site.get_num_of_commodities()).set_owner_phone_number(this_user->get_phone_number());
    if(ui->CategoryCombo->currentText().toStdString()=="سرگرمی:برقی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("e_amusement");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="سرگرمی:غیر برقی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("non_e_amusement");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="لوازم دیجیتالی:اصلی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("dig_applinace");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="لوازم دیجیتالی:جانبی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("dig_accessory");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="خانه:مبلمان")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("furniture");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="خانه:لوازم آشپزخانه")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("kit_applinace");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="خانه:لوازم برقی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("e_applinace");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="پوشاک")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("clothing");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="لوازم التحریر")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("stationery");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="کتاب")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("book");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="خوراکی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("food");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="لوازم زیبایی و بهداشتی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("b_h_supply");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="لوازم موسیقی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("mu_instrument");
    }
    else if(ui->CategoryCombo->currentText().toStdString()=="وسایل پزشکی")
    {
        site.get_commodity(site.get_num_of_commodities()).set_category("me_equipment");
    }
    site.get_commodity(site.get_num_of_commodities()).set_number(ui->NumberLe->text().toInt());
    site.get_commodity(site.get_num_of_commodities()).set_type(ui->TypeLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_company(ui->CompanyLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_city(ui->CityLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_name(ui->NameLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_address(ui->AddressLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_discount_percent(ui->DiscountPercentLe->text().toInt());
    site.get_commodity(site.get_num_of_commodities()).set_color(ui->ColorLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_profit_percent(ui->ProfitPercentLe->text().toInt());
    site.get_commodity(site.get_num_of_commodities()).set_cost(ui->CostLe->text().toInt());
    site.get_commodity(site.get_num_of_commodities()).set_description(ui->DescriptionLe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_volume(ui->VolumeLe->text().toDouble());
    site.get_commodity(site.get_num_of_commodities()).set_weight(ui->WeightLe->text().toDouble());
    site.get_commodity(site.get_num_of_commodities()).set_expiration_date(ui->ExpirationDateDe->text().toStdString());
    site.get_commodity(site.get_num_of_commodities()).set_production_date(ui->ProductionDateDe->text().toStdString());
    if(this_user->get_role()=="store_admin")
    {
        site.get_commodity(site.get_num_of_commodities()).set_is_confirm(true);
    }
    srand(time(0));
    site.get_commodity(site.get_num_of_commodities()).set_id(rand() % 9999 + 1000);
    for(int counter =0;counter<site.get_num_of_commodities();counter++)
    {
        if(site.get_commodity(site.get_num_of_commodities()).get_id()==site.get_commodity(counter).get_id())
        {
            site.get_commodity(site.get_num_of_commodities()).set_id(rand() % 9999 + 1000);
            counter=0;
        }
    }
    site.set_num_of_commodities(site.get_num_of_commodities()+1);
    site.write_digi_kala("DataBase.data",0);
    parentWidget()->show();
}


void EditCommodityDialog::CheckForOk()
{
    if (ui->AddressLe->text().size()>0 && ui->CategoryCombo->currentIndex()>0 && ui->CityLe->text().size()>0 && ui->ColorLe->text().size()>0
         && ui->CompanyLe->text().size()>0 && ui->CostLe->text().size() >0 && ui->DescriptionLe->text().size()>0 && ui->DiscountPercentLe->text().size()>0
         && ui->NameLe->text().size()>0 && ui->NumberLe->text().size()>0
         && ui->NumberLe->text().size()>0  && ui->ProfitPercentLe->text().size()>0
         && ui->TypeLe->text().size()>0 && ui->VolumeLe->text().size()>0 && ui->WeightLe->text().size()>0)
    {
        ui->ConfirmAndReturnBtn->setEnabled(true);
    }
    else
    {
        ui->ConfirmAndReturnBtn->setEnabled(false);
    }
}


void EditCommodityDialog::on_OwnerLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_OwnerPhoneNumber_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_NumberLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_NameLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_CategoryCombo_currentIndexChanged(int index)
{
    CheckForOk();
}


void EditCommodityDialog::on_TypeLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_CompanyLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_CityLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_AddressLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_CostLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_NumOfSellLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_DiscountPercentLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_ColorLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_DescriptionLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_WeightLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_VolumeLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_ProfitPercentLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void EditCommodityDialog::on_IsElectricCB_clicked(bool checked)
{
    site.get_commodity(site.get_num_of_commodities()).set_is_electric(checked);
    return;
}

