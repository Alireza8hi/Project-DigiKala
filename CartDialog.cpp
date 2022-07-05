#include "CartDialog.h"
#include "ui_CartDialog.h"

CartDialog::CartDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CartDialog)
{
    ui->setupUi(this);
}

CartDialog::~CartDialog()
{
    delete ui;
}

void CartDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

