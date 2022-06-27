#include "ReviewAdmin.h"

ReviewAdmin::ReviewAdmin()
{
    this->income =0;
    return;
}

ReviewAdmin::~ReviewAdmin()
{
    this->income =0;
    return;
}

void ReviewAdmin::set_income(int income)
{
    this->income = income;
    return;
}

int ReviewAdmin::get_income() const
{
    return this->income;
}
