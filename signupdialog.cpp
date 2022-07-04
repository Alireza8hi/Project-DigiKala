#include <QMessageBox>
#include <QValidator>
#include "signupdialog.h"
#include "signuprules.h"
#include "ui_signupdialog.h"
#include "Digikala.h"
#include "User.h"
#include <iostream>
#include <QThread>
#include "CustomerWindow.h"
#include "SellerWindow.h"
#include <regex>
#include <string>


using namespace std;

extern User userglobal;
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
    if (ui->RulesCB->isChecked() && ui->NameLe->text().size()>2 && ui->FNameLe->text().size()>2 && ui->NationalCodeLe->text().size() == 10
         && ui->AddressLe->text().size()>3 && ui->PhoneLe->text().size() == 11 && ui->PassLe->text().size()>8 && ui->PassConLe->text().size()>8
         && ui->PassLe->text()==ui->PassConLe->text() && ui->SexCombo->currentIndex()>0 && ui->RuleCombo->currentIndex()>0
         && ui->StateLe->text().size()>2 && ui->CityLe->text().size()>2 && IsEmailValid(ui->EmailLe->text().toStdString()) == true
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
    SignUpRules *SUR = new SignUpRules(this);
    SUR->show();
}

void SignUpDialog::on_OkBtn_clicked()
{
    if(rule=="customer")
    {
        site->add_customer(ui->NameLe->text().toStdString(),ui->FNameLe->text().toStdString(),ui->UsernameLe->text().toStdString(),ui->PassLe->text().toStdString(),ui->AddressLe->text().toStdString(),ui->CityLe->text().toStdString(),ui->StateLe->text().toStdString(),ui->NationalCodeLe->text().toStdString(),ui->PhoneLe->text().toStdString(),ui->EmailLe->text().toStdString(), sex);
        CustomerWindow* customer_window = new class CustomerWindow(this);
        QThread* th1 = new QThread();
        customer_window->moveToThread(th1);
        connect(th1,&QThread::started,customer_window,&CustomerWindow::show);
        connect(customer_window,&CustomerWindow::destroyed,th1,&QThread::quit);
        connect(customer_window,&CustomerWindow::destroyed,customer_window,&CustomerWindow::deleteLater);
        connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        th1->start();
    }
    else
    {
        site->add_seller(ui->NameLe->text().toStdString(),ui->FNameLe->text().toStdString(),ui->UsernameLe->text().toStdString(),ui->PassLe->text().toStdString(),ui->AddressLe->text().toStdString(),ui->CityLe->text().toStdString(),ui->StateLe->text().toStdString(),ui->NationalCodeLe->text().toStdString(),ui->PhoneLe->text().toStdString(),ui->EmailLe->text().toStdString(), sex);
        SellerWindow* seller_window = new class SellerWindow(this);
        QThread* th1 = new QThread();
        seller_window->moveToThread(th1);
        connect(th1,&QThread::started,seller_window,&SellerWindow::show);
        connect(seller_window,&SellerWindow::destroyed,th1,&QThread::quit);
        connect(seller_window,&SellerWindow::destroyed,seller_window,&SellerWindow::deleteLater);
        connect(th1,&QThread::finished,th1,&QThread::deleteLater);
        th1->start();
    }
    QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"Success"," Your registration was successful ",QMessageBox::Ok,this);
    msg_error->show();
    connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
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

