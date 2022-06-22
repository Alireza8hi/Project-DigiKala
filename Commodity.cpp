#include "Commodity.h"

Commodity::Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type=this->owner_phone_number="Unknown";
    this->number=this->cost=this->discount_percent=this->id=this->num_of_sell=this->profit_percent=this->volume=this->weight=0;
    return;
}

Commodity::~Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type=this->owner_phone_number=nullptr;
    this->number=this->cost=this->discount_percent=this->id=this->num_of_sell=this->profit_percent=this->volume=this->weight=0;
    return;
}

void Commodity::set_owner(QString owner)
{
    this->owner = owner;
    return;
}

QString Commodity::get_owner() const
{
    return this->owner;
}

void Commodity::set_owner_phone_number(QString phone_number)
{
    this->owner_phone_number = phone_number;
    return;
}

QString Commodity::get_owner_phone_number() const
{
    return this->owner_phone_number;
}

void Commodity::set_number(int number)
{
    this->number = number;
    return;
}

int Commodity::get_number() const
{
    return this->number;
}

void Commodity::set_id(int id)
{
    this->id = id;
    return;
}

int Commodity::get_id() const
{
    return this->id;
}

void Commodity::set_name(QString name)
{
    this->name = name;
    return;
}

QString Commodity::get_name() const
{
    return this->name;
}

void Commodity::set_category(QString category)
{
    this->category = category;
    return;
}

QString Commodity::get_category() const
{
    return this->category;
}

void Commodity::set_type(QString type)
{
    this->type = type;
    return;
}

QString Commodity::get_type() const
{
    return  this->type;
}

void Commodity::set_company(QString company)
{
    this->company = company;
    return;
}

QString Commodity::get_company() const
{
    return this->company;
}

void Commodity::set_is_electric(bool is_electric)
{
    this->is_electric = is_electric;
    return;
}

bool Commodity::get_is_electric() const
{
    return this->is_electric;
}

void Commodity::set_city(QString city)
{
    this->city = city;
    return;
}

QString Commodity::get_city() const
{
    return this->city;
}

void Commodity::set_address(QString address)
{
    this->address = address;
    return;
}

QString Commodity::get_address() const
{
    return this->address;
}

void Commodity::set_cost(int cost)
{
    this->cost = cost;
    return;
}

int Commodity::get_cost() const
{
    return this->cost;
}

void Commodity::set_num_of_sell(int num_of_sell)
{
    this->num_of_sell = num_of_sell;
    return;
}

int Commodity::get_num_of_sell() const
{
    return this->num_of_sell;
}

void Commodity::set_discount_percent(int discount_percent)
{
    this->discount_percent = discount_percent;
    return;
}

int Commodity::get_discount_percent() const
{
    return  this->discount_percent;
}

void Commodity::set_color(QString color)
{
    this->color = color;
    return;
}

QString Commodity::get_color() const
{
    return this->color;
}

void Commodity::set_production_date(tm production_date)
{
    this->production_date = production_date;
    return;
}

tm Commodity::get_production_date() const
{
    return this->production_date;
}

void Commodity::set_expiration_date(tm expiration_date)
{
    this->expiration_date = expiration_date;
    return;
}

tm Commodity::get_expiration_date() const
{
    return this->expiration_date;
}

void Commodity::set_description(QString description)
{
    this->description = description;
    return;
}

QString Commodity::get_description() const
{
    return this->description;
}

void Commodity::set_weight(double weight)
{
    this->weight = weight;
    return;
}

double Commodity::get_weight() const
{
    return this->weight;
}

void Commodity::set_volume(double volume)
{
    this->volume = volume;
    return;
}

double Commodity::get_volume() const
{
    return this->volume;
}

void Commodity::set_is_deleted(bool is_deleted)
{
    this->is_deleted = is_deleted;
    return;
}

bool Commodity::get_is_deleted() const
{
    return this->is_deleted;
}

void Commodity::set_profit_percent(int profit_percent)
{
    this->profit_percent = profit_percent;
    return;
}

int Commodity::get_profit_percent() const
{
    return this->profit_percent;
}
