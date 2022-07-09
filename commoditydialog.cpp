#include "commoditydialog.h"
#include "messagesdialog.h"
#include "ui_commoditydialog.h"

CommodityDialog::CommodityDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommodityDialog)
{
    ui->setupUi(this);

    ui->Description->hide();
}

CommodityDialog::~CommodityDialog()
{
    delete ui;
}

void CommodityDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}


void CommodityDialog::on_pushButton_clicked()
{
    if (ui->Description->isHidden() == true)
    {
        ui->Description->show();
    }
    else
    {
        ui->Description->hide();
    }
}


void CommodityDialog::on_CommentsBtn_clicked()
{
    MessagesDialog *a = new MessagesDialog(this);
    a->show();
}

