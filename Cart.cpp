#include "Cart.h"
#include "ui_Cart.h"

Cart::Cart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart)
{
    ui->setupUi(this);
}

Cart::~Cart()
{
    delete ui;
}
