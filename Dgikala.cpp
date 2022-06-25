#include "Digikala.h"

DigiKala::DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_admins = this->num_of_sell_sold_commonities = 0;
    this->money = 10000000;
    return;
}

DigiKala::~DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_admins = this->num_of_sell_sold_commonities = this->money = 0;
    return;
}

void DigiKala::set_num_of_commodities(int num_of_commodities)
{
    this->num_of_commodities = num_of_commodities;
    return;
}

int DigiKala::get_num_of_commodities() const
{
    return this->num_of_commodities;
}

void DigiKala::set_num_of_sell_sold_commonities(int num_of_sell_sold_commonities)
{
    this->num_of_sell_sold_commonities = num_of_sell_sold_commonities;
    return;
}

int DigiKala::get_num_of_sell_sold_commonities() const
{
    return this->num_of_sell_sold_commonities;
}

void DigiKala::set_num_of_admins(int num_of_admins)
{
    this->num_of_admins = num_of_admins;
    return;
}

int DigiKala::get_num_of_admins() const
{
    return this->num_of_admins;
}

void DigiKala::set_income(int income)
{
    this->income = income;
    return;
}

int DigiKala::get_income() const
{
    return this->income;
}

void DigiKala::set_money(int money)
{
    this->money = money;
    return;
}

int DigiKala::get_money() const
{
    return this->money;
}
