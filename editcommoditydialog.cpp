#include "editcommoditydialog.h"
#include "ui_editcommoditydialog.h"

EditCommodityDialog::EditCommodityDialog(QWidget *parent , int a) :
    QDialog(parent),
    ui(new Ui::EditCommodityDialog)
{
    ui->setupUi(this);

    ui->NumberLe->setInputMask("000000");
    ui->OwnerPhoneNumber->setInputMask("00000000000");
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
    parentWidget()->show();
}


void EditCommodityDialog::CheckForOk()
{
    if (ui->AddressLe->text().size()>0 && ui->CategoryCombo->currentIndex()>0 && ui->CityLe->text().size()>0 && ui->ColorLe->text().size()>0
         && ui->CompanyLe->text().size()>0 && ui->CostLe->text().size() >0 && ui->DescriptionLe->text().size()>0 && ui->DiscountPercentLe->text().size()>0
         && ui->NameLe->text().size()>0 && ui->NumOfSellLe->text().size()>0
         && ui->NumberLe->text().size()>0 && ui->OwnerLe->text().size()>0 && ui->OwnerPhoneNumber->text().size()>0 && ui->ProfitPercentLe->text().size()>0
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

