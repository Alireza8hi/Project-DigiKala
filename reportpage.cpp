#include "reportpage.h"
#include "Digikala.h"
#include "ui_reportpage.h"
#include <QMessageBox>

report_page::report_page(QWidget *parent,int id) :
    QDialog(parent),
    ui(new Ui::report_page)
{
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

report_page::~report_page()
{
    delete ui;
}

void report_page::on_buttonBox_accepted()
{
    Commodity* this_commodity=nullptr;

    QMessageBox::information(this,"تایید","گزارش شما ثبت شد!");
    return;
}

