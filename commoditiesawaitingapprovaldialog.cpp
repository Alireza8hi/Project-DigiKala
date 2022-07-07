#include "commoditiesawaitingapprovaldialog.h"
#include "ui_commoditiesawaitingapprovaldialog.h"

CommoditiesAwaitingApprovalDialog::CommoditiesAwaitingApprovalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommoditiesAwaitingApprovalDialog)
{
    ui->setupUi(this);
}

CommoditiesAwaitingApprovalDialog::~CommoditiesAwaitingApprovalDialog()
{
    delete ui;
}

void CommoditiesAwaitingApprovalDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

