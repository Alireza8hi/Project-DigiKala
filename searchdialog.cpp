#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);

    ui->PriceRangeLbl->hide();
    ui->PriceRangeLbl2->hide();
    ui->MaxPriceLE->hide();
    ui->MinPriceLE->hide();
    ui->CategoryCombo->hide();
    ui->InStockCB->hide();
    ui->CategoryLbl->hide();

    ui->tableWidget->hide();
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_ReturnBtn_clicked()
{
    this->deleteLater();
    parentWidget()->show();
}


void SearchDialog::on_ShowOptionsBtn_clicked()
{
    if(ui->InStockCB->isHidden() == true)
    {
        ui->PriceRangeLbl->show();
        ui->PriceRangeLbl2->show();
        ui->MaxPriceLE->show();
        ui->MinPriceLE->show();
        ui->CategoryCombo->show();
        ui->InStockCB->show();
        ui->CategoryLbl->show();
    }
    else
    {
        ui->PriceRangeLbl->hide();
        ui->PriceRangeLbl2->hide();
        ui->MaxPriceLE->hide();
        ui->MinPriceLE->hide();
        ui->CategoryCombo->hide();
        ui->InStockCB->hide();
        ui->CategoryLbl->hide();
    }

}


void SearchDialog::on_ExitBtn_clicked()
{
    this->close();
}


void SearchDialog::on_SearchBtn_clicked()
{
    ui->tableWidget->show();
}

