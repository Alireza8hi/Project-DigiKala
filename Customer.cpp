#include "Customer.h"
#include "ui_Customer.h"

Customer::Customer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
}

Customer::~Customer()
{
    delete ui;
}

void Customer::set_income(int income)
{
    this->income = income;
    return;
}

int Customer::get_income() const
{
    return this->income;
}
