#include "listofcommoditiesdialog.h"
#include "ui_listofcommoditiesdialog.h"

ListOFCommoditiesDialog::ListOFCommoditiesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListOFCommoditiesDialog)
{
    ui->setupUi(this);
}

ListOFCommoditiesDialog::~ListOFCommoditiesDialog()
{
    delete ui;
}

void ListOFCommoditiesDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

