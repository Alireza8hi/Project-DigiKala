#include "MainAdminWindow.h"
#include "CartDialog.h"
#include "Digikala.h"
#include "allcommoditywindow.h"
#include "categorywindow.h"
#include "listofpeopledialog.h"
#include "messagesdialog.h"
#include "profiledialog.h"
#include "searchdialog.h"
#include "ui_MainAdminWindow.h"
#include "wishlistdialog.h"

MainAdminWindow::MainAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainAdminWindow)
{
    ui->setupUi(this);
    ui->CommodityProfitLbl->setText(QString::number(site.get_income()));

    ui->ChangeAdminIncomeUserLe->setInputMask("000000000000");

    ui->OpenOtherAdminsLe->hide();
    ui->OpenOtherAdminsConfirmBtn->hide();

    ui->ChangeAdminIncomeConfirmBtn->hide();
    ui->ChangeAdminIncomeLe->hide();
    ui->ChangeAdminIncomeUserLe->hide();

    ui->RemoveAdminLe->hide();
    ui->RemoveAdminConfirmBtn->hide();

    ui->AddAdminConfirmBtn->hide();
    ui->AddAdminUserLe->hide();
    ui->AddAdminCombo->hide();

    ui->CommodityProfitLbl->hide();

    ui->ChangeAdminConfirmBtn->hide();
    ui->CurrentAdminLe->hide();
    ui->NewAdminLe->hide();
}

MainAdminWindow::~MainAdminWindow()
{
    delete ui;
}

void MainAdminWindow::on_OpenProfileAct_triggered()
{
    ProfileDialog *a = new ProfileDialog(this);
    a->show();
}


void MainAdminWindow::on_MessagesAct_triggered()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}


void MainAdminWindow::on_AllCommoditysBtn_clicked()
{
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}

void MainAdminWindow::on_CategoriesBtn_clicked()
{
    CategoryWindow *a = new CategoryWindow(this);
    a->show();
}


void MainAdminWindow::on_SearchBtn_clicked()
{
    SearchDialog *a = new SearchDialog(this);
    a->show();
}


void MainAdminWindow::on_CartBtn_clicked()
{
    CartDialog *a = new CartDialog(this);
    a->show();
}


void MainAdminWindow::on_WishListBtn_clicked()
{
    WishListDialog *a = new WishListDialog(this);
    a->show();
}


void MainAdminWindow::on_OpenOtherAdminsBtn_clicked()
{
    if(ui->OpenOtherAdminsLe->isHidden() == true)
    {
        ui->OpenOtherAdminsLe->show();
        ui->OpenOtherAdminsConfirmBtn->show();
    }
    else
    {
        ui->OpenOtherAdminsLe->hide();
        ui->OpenOtherAdminsConfirmBtn->hide();
    }

}


void MainAdminWindow::on_ChangeAdminIncomeBtn_clicked()
{
    if(ui->ChangeAdminIncomeLe->isHidden() == true)
    {
        ui->ChangeAdminIncomeConfirmBtn->show();
        ui->ChangeAdminIncomeLe->show();
        ui->ChangeAdminIncomeUserLe->show();
    }
    else
    {
        ui->ChangeAdminIncomeConfirmBtn->hide();
        ui->ChangeAdminIncomeLe->hide();
        ui->ChangeAdminIncomeUserLe->hide();
    }
}


void MainAdminWindow::on_RemoveAdminBtn_clicked()
{
    if(ui->RemoveAdminLe->isHidden() == true)
    {
        ui->RemoveAdminLe->show();
        ui->RemoveAdminConfirmBtn->show();
    }
    else
    {
        ui->RemoveAdminLe->hide();
        ui->RemoveAdminConfirmBtn->hide();
    }
}


void MainAdminWindow::on_AddAdminBtn_clicked()
{
    if(ui->AddAdminCombo->isHidden() == true)
    {
        ui->AddAdminConfirmBtn->show();
        ui->AddAdminUserLe->show();
        ui->AddAdminCombo->show();
    }
    else
    {
        ui->AddAdminConfirmBtn->hide();
        ui->AddAdminUserLe->hide();
        ui->AddAdminCombo->hide();
    }
}


void MainAdminWindow::on_SuccessfulSellersBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_BestCustomersBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_ReadUserInfoBtn_clicked()
{
    this->close();
    ListOfPeopleDialog *a = new ListOfPeopleDialog(this);
    a->show();
}


void MainAdminWindow::on_CommodityProfitBtn_clicked()
{
    if(ui->CommodityProfitLbl->isHidden() == true)
    {
        ui->CommodityProfitLbl->show();
    }
    else
    {
        ui->CommodityProfitLbl->hide();
    }
}


void MainAdminWindow::on_SoldCommoditiesBtn_clicked()
{
    this->close();
    AllCommodityWindow *a = new AllCommodityWindow(this);
    a->show();
}


void MainAdminWindow::on_ChangeAdminBtn_clicked()
{
    if(ui->NewAdminLe->isHidden() == true)
    {
        ui->ChangeAdminConfirmBtn->show();
        ui->CurrentAdminLe->show();
        ui->NewAdminLe->show();
    }
    else
    {
        ui->ChangeAdminConfirmBtn->hide();
        ui->CurrentAdminLe->hide();
        ui->NewAdminLe->hide();
    }
}


void MainAdminWindow::on_AddAdminConfirmBtn_clicked()
{
    User* this_user2 = nullptr;
    string last_role;
    string this_role;
    if(ui->AddAdminCombo->currentText().toStdString()=="مدیر انبار")
    {
        this_role = "store_admin";
    }
    else
    {
        this_role = "support_admin";
    }
    for(int counter =0;counter<site.get_num_of_users();counter++)
    {
        if(site.get_user(counter).get_username()==ui->AddAdminUserLe->text().toStdString())
        {
            this_user2 = & site.get_user(counter);
            last_role = this_user2->get_role();
            break;
        }
    }
    if(this_user2==nullptr)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","there is not this user",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else if(last_role=="main_admin")
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you can't change main admin role",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else if(last_role== "review_admin")
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you can't change review admin role",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else if(last_role=="post_admin")
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error"," you can't change post admin role",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else
    {
        if(last_role=="customer")
        {
            site.set_num_of_customer(site.get_num_of_customer()-1);
        }
        else if(last_role=="seller")
        {
            site.set_num_of_seller(site.get_num_of_seller()-1);
        }
        else if(last_role=="store_admin")
        {
            site.set_num_of_store_admin(site.get_num_of_store_admin()-1);
        }
        else
        {
            site.set_num_of_support_admin(site.get_num_of_support_admin()-1);
        }
        if(this_role=="store_admin")
        {
            site.set_num_of_store_admin(site.get_num_of_store_admin()+1);
        }
        else
        {
            site.set_num_of_support_admin(site.get_num_of_support_admin()+1);
        }
        this_user2->set_role(this_role);
        site.write_digi_kala("DataBase.data",0);
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"success","Done",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
}

void MainAdminWindow::CheckForAdd()
{
    if (ui->AddAdminUserLe->text().size()>0 && ui->AddAdminCombo->currentIndex()>0)
    {
        ui->AddAdminConfirmBtn->setEnabled(true);
    }
    else
    {
        ui->AddAdminConfirmBtn->setEnabled(false);
    }
}


void MainAdminWindow::on_AddAdminUserLe_textChanged(const QString &arg1)
{
    CheckForAdd();
}


void MainAdminWindow::on_AddAdminCombo_currentIndexChanged(int index)
{
    CheckForAdd();
}

void MainAdminWindow::CheckForChange()
{
    if (ui->CurrentAdminLe->text().size()>0 && ui->NewAdminLe->text().size()>0)
    {
        ui->ChangeAdminConfirmBtn->setEnabled(true);
    }
    else
    {
        ui->ChangeAdminConfirmBtn->setEnabled(false);
    }
}


void MainAdminWindow::on_ChangeAdminCombo_currentIndexChanged(int index)
{
    CheckForChange();
}


void MainAdminWindow::on_CurrentAdminLe_textChanged(const QString &arg1)
{
    CheckForChange();
}


void MainAdminWindow::on_NewAdminLe_textChanged(const QString &arg1)
{
    CheckForChange();
}


void MainAdminWindow::on_ChangeAdminConfirmBtn_clicked()
{
    User *this_user2 = nullptr;
    User *this_user3 = nullptr;
    for(int counter =0;counter<site.get_num_of_users();counter++)
    {
        if(site.get_user(counter).get_username()==ui->CurrentAdminLe->text().toStdString())
        {
            this_user2 = & site.get_user(counter);
            break;
        }
    }
    for(int counter =0;counter<site.get_num_of_users();counter++)
    {
        if(site.get_user(counter).get_username()==ui->NewAdminLe->text().toStdString())
        {
            this_user3 = & site.get_user(counter);
            break;
        }
    }
    if(this_user2==nullptr || this_user3==nullptr)
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","usernames do not exit",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else if(this_user2->get_username()==this_user3->get_username())
    {
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","usernames are similar",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
    else
    {
        string last_role2 = this_user2->get_role();
        string last_role3 = this_user3->get_role();
        this_user2->set_role(last_role3);
        this_user3->set_role(last_role2);
        site.write_digi_kala("DataBase.data",0);
        QMessageBox * msg_error = new QMessageBox(QMessageBox::Information,"success","Done",QMessageBox::Ok, this);
        msg_error->show();
        connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
    }
}

