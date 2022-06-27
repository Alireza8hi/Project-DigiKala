#include "Seller.h"

Seller::Seller()
{
    this->sales_revenue = 0;
    return;
}

Seller::~Seller()
{
    this->sales_revenue = 0;
    return;
}

void Seller::set_sales_revenue(int sales_revenue)
{
    this->sales_revenue = sales_revenue;
    return;
}

int Seller::get_sales_revenue() const
{
    return this->sales_revenue;
}
