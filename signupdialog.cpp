#include <QMessageBox>
#include <QValidator>
#include "Digikala.h"
#include "signupdialog.h"
#include "tobeknowndialog.h"
#include "ui_signupdialog.h"
#include "User.h"
#include <iostream>
#include <QThread>
#include "CustomerWindow.h"
#include "SellerWindow.h"
#include <regex>
#include <string>


using namespace std;

QString rule;
int sex;

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
    ui->OkBtn->setDisabled(true);

    ui->NationalCodeLe->setInputMask("0000000000");
    ui->PhoneLe->setInputMask("00000000000");

    ui->NameLbl->setStyleSheet("color: rgb(0, 0, 0)");

}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

bool IsEmailValid(const std::string& email)
{
   const std::regex pattern
      ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
   return std::regex_match(email, pattern);
}

bool IsUsernameValid(string username)
{
    int special = 0, l = username.length();
    if (l == 0 || l > 30)
        return false;

    for (int i = 0; i < l; i++)
    {
        char s = username.at(i);
        if (s == ' ')
            return false;
        if (isalnum(s))
            continue;
        else
        {
            if (s == '_' || s == '.')
            {
                special++;
                if (special > 1)
                    return false;
            }
            else
                return false;
        }
    }
    return true;
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

void SignUpDialog::CheckForOk()
{
    if (ui->RulesCB->isChecked() && ui->NameLe->text().size()>0 && ui->FNameLe->text().size()>0 && ui->NationalCodeLe->text().size() == 10
         && ui->AddressLe->text().size()>3 && ui->PhoneLe->text().size() == 11 && ui->PassLe->text().size()>7 && ui->PassConLe->text().size()>7
         && ui->PassLe->text()==ui->PassConLe->text() && ui->SexCombo->currentIndex()>0 && ui->RuleCombo->currentIndex()>0
         && ui->StateLe->text().size()>0 && ui->CityLe->text().size()>0 && IsEmailValid(ui->EmailLe->text().toStdString()) == true
         && IsUsernameValid(ui->UsernameLe->text().toStdString()) == true)
    {
        ui->OkBtn->setEnabled(true);
    }
    else
    {
        ui->OkBtn->setEnabled(false);
    }
}


void SignUpDialog::on_NameLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_FNameLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_SexCombo_currentIndexChanged(int index)
{
    CheckForOk();
}
void SignUpDialog::on_NationalCodeLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_AddressLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_PhoneLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_EmailLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_UsernameLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_PassLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_PassConLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_RulesCB_clicked()
{
    CheckForOk();
}
void SignUpDialog::on_RuleCombo_currentIndexChanged(int index)
{
    CheckForOk();
}
void SignUpDialog::on_StateLe_textChanged(const QString &arg1)
{
    CheckForOk();
}
void SignUpDialog::on_CityLe_textChanged(const QString &arg1)
{
    CheckForOk();
}


void SignUpDialog::on_SeeRulesBtn_clicked()
{
    ToBeKnownDialog *SUR = new ToBeKnownDialog(this , 1);
    SUR->show();
}

void SignUpDialog::on_OkBtn_clicked()
{
    bool repeat=false;
    for(int counter = 0;counter<site.get_num_of_users();counter++)
    {
        if(ui->UsernameLe->text().toStdString()==site.get_user(counter).get_username())
        {
            repeat = true;
        }
    }
    if(repeat==true)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"error"," Your username was entered,change it ",QMessageBox::Ok,this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else
    {
    if(rule=="customer")
    {
        site.add_customer(ui->NameLe->text().toStdString(),ui->FNameLe->text().toStdString(),ui->UsernameLe->text().toStdString(),ui->PassLe->text().toStdString(),ui->AddressLe->text().toStdString(),ui->CityLe->text().toStdString(),ui->StateLe->text().toStdString(),ui->NationalCodeLe->text().toStdString(),ui->PhoneLe->text().toStdString(),ui->EmailLe->text().toStdString(), sex);
    }
    else
    {
        site.add_seller(ui->NameLe->text().toStdString(),ui->FNameLe->text().toStdString(),ui->UsernameLe->text().toStdString(),ui->PassLe->text().toStdString(),ui->AddressLe->text().toStdString(),ui->CityLe->text().toStdString(),ui->StateLe->text().toStdString(),ui->NationalCodeLe->text().toStdString(),ui->PhoneLe->text().toStdString(),ui->EmailLe->text().toStdString(), sex);
    }
    site.write_digi_kala("DataBase.data",0);
    QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"Success"," Your registration was successful ",QMessageBox::Ok,this);
    msg_error->show();
    connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    connect(msg_error,&QMessageBox::buttonClicked,this,&SignUpDialog::deleteLater,Qt::QueuedConnection);
    parentWidget()->show();
    }
    return;
}

void SignUpDialog::on_CancelBtn_clicked()
{
    parentWidget()->show();
}


void SignUpDialog::on_BackToLogIn_clicked()
{
    parentWidget()->show();
}

void SignUpDialog::on_RuleCombo_textActivated(const QString &arg1)
{
    if(arg1=="مشتری")
    {
        rule = "customer";
    }
    else if(arg1=="فروشنده")
    {
        rule = "seller";
    }
    return;
}


void SignUpDialog::on_SexCombo_textActivated(const QString &arg1)
{
    if (arg1=="مرد")
    {
        sex = 1;
    }
    else if(arg1=="زن")
    {
        sex = 2;
    }
    else
    {
        sex = 0;
    }
    return;
}

