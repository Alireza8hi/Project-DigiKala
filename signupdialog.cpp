#include "signupdialog.h"
#include "ui_signupdialog.h"

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
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

