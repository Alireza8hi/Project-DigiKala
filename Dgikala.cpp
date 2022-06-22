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
