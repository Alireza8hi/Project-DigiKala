#include "Customer.h"

Customer::Customer()
{
    this->sales_revenue=0;
    return;
}

Customer::~Customer()
{
    this->sales_revenue=0;
    return;
}

void Customer::set_sales_revenue(int sales_revenue)
{
    this->sales_revenue = sales_revenue;
    return;
}

int Customer::get_sales_revenue() const
{
    return this->sales_revenue;
}
