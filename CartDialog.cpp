#include "CartDialog.h"
#include "Digikala.h"
#include "ui_CartDialog.h"

CartDialog::CartDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CartDialog)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(5);
    for(int i=0 ; i<this_user->get_num_of_buy_list() ; i++)
    {
        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString("نام کالا")));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString("تعداد")));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::fromStdString("قیمت تگ")));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::fromStdString("قیمت کل")));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem("حذف کالا"));//gharare vaghti ro in bakhsh har kala click shod pakesh kone
    }
}

CartDialog::~CartDialog()
{
    delete ui;
}

void CartDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

