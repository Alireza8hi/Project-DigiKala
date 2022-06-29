#include "SupportAdmin.h"

SupportAdmin::SupportAdmin()
{
    this->income = 0;
    return;
}

SupportAdmin::~SupportAdmin()
{
    this->income = 0;
    return;
}

void SupportAdmin::set_income(int income)
{
    this->income = income;
    return;
}

int SupportAdmin::get_income() const
{
    return this->income;
}
