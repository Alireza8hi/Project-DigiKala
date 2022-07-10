#include "wishlistdialog.h"
#include "Digikala.h"
#include "ui_wishlistdialog.h"

WishListDialog::WishListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WishListDialog)
{
    ui->setupUi(this);


    ui->tableWidget->setColumnCount(3);
    for(int i=0 ; this_user->get_num_of_favorite() ; i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString("نام کالا")));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString("قیمت")));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::fromStdString("اضافه کردن به سبد خرید")));//gharare vaghti ro in bakhsh har kala click shod bendaze too list kharid
    }
}

WishListDialog::~WishListDialog()
{
    delete ui;
}

void WishListDialog::on_ReturnBtn_clicked()
{
    this->parentWidget()->show();
}

