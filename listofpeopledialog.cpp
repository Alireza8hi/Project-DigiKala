#include "listofpeopledialog.h"
#include "ui_listofpeopledialog.h"

ListOfPeopleDialog::ListOfPeopleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListOfPeopleDialog)
{
    ui->setupUi(this);
}

ListOfPeopleDialog::~ListOfPeopleDialog()
{
    delete ui;
}

void ListOfPeopleDialog::on_ReturnBtn_clicked()
{
    this->deleteLater();
    parentWidget()->show();
}

