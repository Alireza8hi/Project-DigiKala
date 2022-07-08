#include "profiledialog.h"
#include "Digikala.h"
#include "ui_profiledialog.h"
#include "signupdialog.h"
#include "accountwindow.h"

ProfileDialog::ProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfileDialog)
{
    ui->setupUi(this);
    ui->NationalCodeLe->setInputMask("0000000000");
    ui->PhoneLe->setInputMask("00000000000");
    ui->NameLe->setText(QString::fromStdString(this_user->get_name()));
    ui->FNameLe->setText(QString::fromStdString(this_user->get_family()));
    ui->AddressLe->setText(QString::fromStdString(this_user->get_address()));
    ui->CityLe->setText(QString::fromStdString(this_user->get_city()));
    ui->EmailLe->setText(QString::fromStdString(this_user->get_email()));
    ui->NationalCodeLe->setText(QString::fromStdString(this_user->get_ncode()));
    ui->PhoneLe->setText(QString::fromStdString(this_user->get_phone_number()));
    ui->StateLe->setText(QString::fromStdString(this_user->get_province()));
    switch(this_user->get_sex())
    {
    case 1:
        ui->SexCombo->setCurrentText("مرد");
        break;
    case 2:
        ui->SexCombo->setCurrentText("زن");
        break;
    default:
        ui->SexCombo->setCurrentText("مایل به گفتن نیستم");
        break;
    }
}

ProfileDialog::~ProfileDialog()
{
    delete ui;
}


void ProfileDialog::on_EditPhoneBtn_clicked()
{
    if(ui->PhoneLe->isReadOnly() == false)
    {
        ui->PhoneLe->setReadOnly(true);
    }
    else
    {
        ui->PhoneLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditStateBtn_clicked()
{
    if(ui->StateLe->isReadOnly() == false)
    {
        ui->StateLe->setReadOnly(true);
    }
    else
    {
        ui->StateLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditCityBtn_clicked()
{
    if(ui->CityLe->isReadOnly() == false)
    {
        ui->CityLe->setReadOnly(true);
    }
    else
    {
        ui->CityLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditAddressBtn_clicked()
{
    if(ui->AddressLe->isReadOnly() == false)
    {
        ui->AddressLe->setReadOnly(true);
    }
    else
    {
        ui->AddressLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditEmailBtn_clicked()
{
    if(ui->EmailLe->isReadOnly() == false)
    {
        ui->EmailLe->setReadOnly(true);
    }
    else
    {
        ui->EmailLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditPassBtn_clicked()
{
    if(ui->PassLe->isReadOnly() == false)
    {
        ui->PassLe->setReadOnly(true);
        ui->NewPassLe->setEnabled(false);
        ui->NewPassConLe->setEnabled(false);
        //inja code bara taghir ramz
        ui->NewPassLe->clear();
        ui->NewPassConLe->clear();
    }
    else
    {
        ui->PassLe->setReadOnly(false);
        ui->NewPassLe->setEnabled(true);
        ui->NewPassConLe->setEnabled(true);
    }
}

void ProfileDialog::on_EditNameBtn_clicked()
{
    if(ui->NameLe->isReadOnly() == false)
    {
        ui->NameLe->setReadOnly(true);
    }
    else
    {
        ui->NameLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditFNameBtn_clicked()
{
    if(ui->FNameLe->isReadOnly() == false)
    {
        ui->FNameLe->setReadOnly(true);
    }
    else
    {
        ui->FNameLe->setReadOnly(false);
    }
}


void ProfileDialog::on_EditSexBtn_clicked()
{
    if(ui->SexCombo->isEnabled() == false)
    {
        ui->SexCombo->setEnabled(true);
    }
    else
    {
        ui->SexCombo->setEnabled(false);
    }
}


void ProfileDialog::on_EditNationalCodeBtn_clicked()
{
    if(ui->NationalCodeLe->isReadOnly() == false)
    {
        ui->NationalCodeLe->setReadOnly(true);
    }
    else
    {
        ui->NationalCodeLe->setReadOnly(false);
    }
}


void ProfileDialog::CheckForPass()
{
    if (ui->NewPassLe->text() == ui->NewPassConLe->text() && ui->NewPassLe->text().size()>7 )
    {
        ui->WrongPassLbl->clear();
        ui->EditPassBtn->setDisabled(false);
    }
    else
    {
        ui->WrongPassLbl->setText("رمز عبور جدید با تکرارش مطاقبت ندارد");
        ui->EditPassBtn->setDisabled(true);
    }
}

void ProfileDialog::on_NewPassLe_textChanged(const QString &arg1)
{
    CheckForPass();
}


void ProfileDialog::on_NewPassConLe_textChanged(const QString &arg1)
{
    CheckForPass();
}




void ProfileDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
    site.write_digi_kala("DataBase.data",0);
}


void ProfileDialog::on_PhoneLe_textChanged(const QString &arg1)
{
    if (ui->PhoneLe->text().size() != 11)
    {
        ui->EditPhoneBtn->setDisabled(true);
    }
    else
    {
        ui->EditPhoneBtn->setDisabled(false);
    }
}


void ProfileDialog::on_NationalCodeLe_textChanged(const QString &arg1)
{
    if (ui->NationalCodeLe->text().size() != 11)
    {
        ui->EditNationalCodeBtn->setDisabled(true);
    }
    else
    {
        ui->EditNationalCodeBtn->setDisabled(false);
    }
}


void ProfileDialog::on_EmailLe_textChanged(const QString &arg1)
{
    if (IsEmailValid(ui->EmailLe->text().toStdString()) == true)
    {
        ui->EditEmailBtn->setDisabled(false);
    }
    else
    {
        ui->EditEmailBtn->setDisabled(true);
    }
}


void ProfileDialog::on_NameLe_textChanged(const QString &arg1)
{
    if(ui->NameLe->text().size() > 0)
    {
        ui->EditNameBtn->setEnabled(true);
    }
    else
    {
        ui->EditNameBtn->setEnabled(false);
    }
}


void ProfileDialog::on_FNameLe_textChanged(const QString &arg1)
{
    if(ui->FNameLe->text().size() > 0)
    {
        ui->EditFNameBtn->setEnabled(true);
    }
    else
    {
        ui->EditFNameBtn->setEnabled(false);
    }
}


void ProfileDialog::on_StateLe_textChanged(const QString &arg1)
{
    if(ui->StateLe->text().size() > 0)
    {
        ui->EditStateBtn->setEnabled(true);
    }
    else
    {
        ui->EditStateBtn->setEnabled(false);
    }
}


void ProfileDialog::on_CityLe_textChanged(const QString &arg1)
{
    if(ui->CityLe->text().size() > 0)
    {
        ui->EditCityBtn->setEnabled(true);
    }
    else
    {
        ui->EditCityBtn->setEnabled(false);
    }
}


void ProfileDialog::on_AddressLe_textChanged()
{
    if(ui->AddressLe->toPlainText().size() > 0)
    {
        ui->EditAddressBtn->setEnabled(true);
    }
    else
    {
        ui->EditAddressBtn->setEnabled(false);
    }
}

