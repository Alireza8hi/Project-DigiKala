#include "signupdialog.h"
#include "ui_signupdialog.h"
#include "user.h"

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
    ui->OkBtn->setDisabled(true);
    if (ui->NameLe->text().size()>0 && ui->FNameLe->text().size()>0 && ui->NationalCodeLe->text().size()>0 && ui->AddressLe->text().size()>0 && ui->PhoneLe->text().size()>0 && ui->EmailLe->text().size()>0 && ui->UsernameLe->text().size()>0 && ui->PassLe->text().size()>0 && ui->PassConLe->text().size()>0 )
    {
        //to be continued
    }

}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}


void SignUpDialog::on_ShowPassCB_clicked()
{
    if(ui->ShowPassCB->isChecked() == true)
    {
        ui->PassConLe->setEchoMode(QLineEdit::Normal);
        ui->PassLe->setEchoMode(QLineEdit::Normal);
    }
    else if(ui->ShowPassCB->isChecked() == false)
    {
        ui->PassConLe->setEchoMode(QLineEdit::Password);
        ui->PassLe->setEchoMode(QLineEdit::Password);
    }
}


