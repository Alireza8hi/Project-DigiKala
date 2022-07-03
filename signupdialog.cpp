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
    if (ui->RulesCB->isChecked() && ui->NameLe->text().size()>0 && ui->FNameLe->text().size()>0 && ui->NationalCodeLe->text().size()>0 && ui->AddressLe->text().size()>0 && ui->PhoneLe->text().size()>0 && ui->EmailLe->text().size()>0 && ui->UsernameLe->text().size()>0 && ui->PassLe->text().size()>0 && ui->PassConLe->text().size()>0 && ui->PassLe->text()==ui->PassConLe->text() && ui->SexCombo->currentIndex()>0 && ui->RuleCombo->currentIndex()>0 && ui->StateLe->text().size()>0 && ui->CityLe->text().size()>0)
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
        site->add_customer(ui->NameLe->text(),ui->FNameLe->text(),ui->UsernameLe->text(),ui->PassLe->text(),ui->AddressLe->text(),ui->CityLe->text(),ui->StateLe->text(),ui->NationalCodeLe->text(),ui->PhoneLe->text(),ui->EmailLe->text(), sex);
        if(open_account==false)
        {
            CustomerWindow* customer_window = new class CustomerWindow(this);
            QThread* th1 = new QThread();
            customer_window->moveToThread(th1);
            connect(th1,&QThread::started,customer_window,&CustomerWindow::show);
            connect(customer_window,&CustomerWindow::destroyed,th1,&QThread::quit);
            connect(customer_window,&CustomerWindow::destroyed,customer_window,&CustomerWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
            th1->start();
            open_account = true;
        }
    }
    else
    {
        site->add_seller(ui->NameLe->text(),ui->FNameLe->text(),ui->UsernameLe->text(),ui->PassLe->text(),ui->AddressLe->text(),ui->CityLe->text(),ui->StateLe->text(),ui->NationalCodeLe->text(),ui->PhoneLe->text(),ui->EmailLe->text(), sex);
        if(open_account==false)
        {
            SellerWindow* seller_window = new class SellerWindow(this);
            QThread* th1 = new QThread();
            seller_window->moveToThread(th1);
            connect(th1,&QThread::started,seller_window,&SellerWindow::show);
            connect(seller_window,&SellerWindow::destroyed,th1,&QThread::quit);
            connect(seller_window,&SellerWindow::destroyed,seller_window,&SellerWindow::deleteLater);
            connect(th1,&QThread::finished,th1,&QThread::deleteLater);
            th1->start();
            open_account = true;
        }
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

