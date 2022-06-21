#include "Commodity.h"

Commodity::Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type="Unknown";
    return;
}

Commodity::~Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type=nullptr;
    this->owner_phone_number=this->numbers=this->cost=this->discount_percent=this->id=this->num_of_sell=this->profit_percent=this->volume=this->weight=0;
    return;
}
