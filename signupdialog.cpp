#include <QMessageBox>
#include <QValidator>
#include "signupdialog.h"
#include "signuprules.h"
#include "ui_signupdialog.h"
#include "Digikala.h"
#include "User.h"
extern User userglobal;
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
    if (ui->RulesCB->isChecked() && ui->NameLe->text().size()>0 && ui->FNameLe->text().size()>0 && ui->NationalCodeLe->text().size()>0 && ui->AddressLe->text().size()>0 && ui->PhoneLe->text().size()>0 && ui->EmailLe->text().size()>0 && ui->UsernameLe->text().size()>0 && ui->PassLe->text().size()>0 && ui->PassConLe->text().size()>0 && ui->PassLe->text()==ui->PassConLe->text() && ui->SexCombo->currentIndex()>0)
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


void SignUpDialog::on_SeeRulesBtn_clicked()
{
    SignUpRules *SUR = new SignUpRules(this);
    SUR->show();
}


void SignUpDialog::on_OkBtn_clicked()
{
    int login =1,pos,count,i;
    FILE *fuser=nullptr;
    User checkuser,writeuser;
    if(ui->PassConLe->text()!=ui->PassLe->text())
    {
        login=0;
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," Password and password replication are not the same ",QMessageBox::Ok|QMessageBox::Cancel);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else
    {
    fuser=fopen("user.txt","r+");
    if(fuser==NULL)
        fuser=fopen("user.txt","w+");
    fseek(fuser,0,SEEK_END);
    pos=ftell(fuser);
    count=pos/sizeof(User);
    for(i=0;i<count ;i++)
    {
        fread(&checkuser,sizeof(User),1,fuser);
        if (checkuser.get_username()==ui->UsernameLe->text())
        {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," The username entered in the system is available. Please enter another username ",QMessageBox::Ok|QMessageBox::Cancel);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
        login=0;
        fclose(fuser);
        break;
        }
    }
    if(login)
    {
        writeuser.set_username(ui->UsernameLe->text());
        writeuser.set_password(ui->PassLe->text());
        // نقش
        writeuser.set_name(ui->NameLe->text());
        writeuser.set_family(ui->FNameLe->text());
        writeuser.set_sex(ui->SexCombo->currentIndex());
        writeuser.set_ncode(ui->NationalCodeLe->text());
        writeuser.set_adress(ui->AddressLe->text());
        writeuser.set_phone_number(ui->PhoneLe->text());
        writeuser.set_email(ui->EmailLe->text());
        //fwrite(&writeuser,sizeof(User),1,fuser);
        writeuser.writeuser(fuser);
        fclose(fuser);
        userglobal=writeuser;
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"Success"," Your registration was successful ",QMessageBox::Ok|QMessageBox::Cancel);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
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

