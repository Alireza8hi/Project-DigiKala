#include "commoditiesawaitingpostdialog.h"
#include "ui_commoditiesawaitingpostdialog.h"

CommoditiesAwaitingPostDialog::CommoditiesAwaitingPostDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommoditiesAwaitingPostDialog)
{
    ui->setupUi(this);
}

CommoditiesAwaitingPostDialog::~CommoditiesAwaitingPostDialog()
{
    delete ui;
}

void CommoditiesAwaitingPostDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

