#include "profiledialog.h"
#include "ui_profiledialog.h"

ProfileDialog::ProfileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProfileDialog)
{
    ui->setupUi(this);
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
    if(ui->AddressTe->isReadOnly() == false)
    {
        ui->AddressTe->setReadOnly(true);
    }
    else
    {
        ui->AddressTe->setReadOnly(false);
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

