#include "PostAdmin.h"

PostAdmin::PostAdmin()
{
    this->income = 0;
    return;
}

PostAdmin::~PostAdmin()
{
    this->income = 0;
    return;
}

void PostAdmin::set_income(int income)
{
    this->income = income;
    return;
}

int PostAdmin::get_income() const
{
    return this->income;
}

void PostAdmin::set_province(string province)
{
    this->province = province;
    return;
}

string PostAdmin::get_province() const
{
    return this->province;
}
