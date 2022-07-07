#include "messagesdialog.h"
#include "ui_messagesdialog.h"

MessagesDialog::MessagesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessagesDialog)
{
    ui->setupUi(this);
}

MessagesDialog::~MessagesDialog()
{
    delete ui;
}

void MessagesDialog::on_ReturnBtn_clicked()
{
    parentWidget()->show();
}

