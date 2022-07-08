#include "editcommoditydialog.h"
#include "ui_editcommoditydialog.h"

EditCommodityDialog::EditCommodityDialog(QWidget *parent , int a) :
    QDialog(parent),
    ui(new Ui::EditCommodityDialog)
{
    ui->setupUi(this);
}

EditCommodityDialog::~EditCommodityDialog()
{
    delete ui;
}

void EditCommodityDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}


void EditCommodityDialog::on_ConfirmAndReturnBtn_clicked()
{
    parentWidget()->show();
}

