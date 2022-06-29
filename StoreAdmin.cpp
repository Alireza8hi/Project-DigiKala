#include "StoreAdmin.h"

StoreAdmin::StoreAdmin()
{
    this->income = 0;
    return;
}

StoreAdmin::~StoreAdmin()
{
    this->income = 0;
    return;
}

void StoreAdmin::set_income(int income)
{
    this->income = income;
    return;
}

int StoreAdmin::get_income() const
{
    return this->income;
}
