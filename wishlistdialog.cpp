#include "wishlistdialog.h"
#include "ui_wishlistdialog.h"

WishListDialog::WishListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WishListDialog)
{
    ui->setupUi(this);


    ui->tableWidget->setColumnCount(3);
    for(int i=0 ; i<55 /* tedad kala bejaye 55 */ ; i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString("نام کالا")));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString("قیمت")));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem("اضافه کردن به سبد خرید"));//in ro dast nazan //gharare vaghti ro in bakhsh har kala click shod bendaze too list kharid
    }
}

WishListDialog::~WishListDialog()
{
    delete ui;
}
