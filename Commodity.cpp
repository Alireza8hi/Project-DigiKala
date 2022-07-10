#include "Commodity.h"

using namespace std;

Commodity::Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type=this->owner_phone_number=this->expiration_date=this->production_date="Unknown";
    this->number=this->cost=this->discount_percent=this->id=this->num_of_sell=this->profit_percent=this->volume=this->weight=0;
    this->is_confirm=this->is_deleted=this->is_electric=false;
    return;
}

Commodity::Commodity(const Commodity &other)
{
    this->address=other.address;
    this->category=other.category;
    this->city=other.city;
    this->color=other.color;
    this->company=other.company;
    this->description=other.description;
    this->name=other.name;
    this->owner=other.owner;
    this->type=other.type;
    this->owner_phone_number=other.owner_phone_number;
    this->number=other.number;
    this->cost=other.cost;
    this->discount_percent=other.discount_percent;
    this->id=other.id;
    this->num_of_sell=other.num_of_sell;
    this->profit_percent=other.profit_percent;
    this->volume=other.volume;
    this->weight=other.weight;
    //this comment
    //this complaint
    return;
}

Commodity &Commodity::operator=(const Commodity &other)
{
    this->~Commodity();
    this->address=other.address;
    this->category=other.category;
    this->city=other.city;
    this->color=other.color;
    this->company=other.company;
    this->description=other.description;
    this->name=other.name;
    this->owner=other.owner;
    this->type=other.type;
    this->owner_phone_number=other.owner_phone_number;
    this->number=other.number;
    this->cost=other.cost;
    this->discount_percent=other.discount_percent;
    this->id=other.id;
    this->num_of_sell=other.num_of_sell;
    this->profit_percent=other.profit_percent;
    this->volume=other.volume;
    this->weight=other.weight;
    //this comment
    //this complaint
    return *this;
}

Commodity::~Commodity()
{
    this->address=this->category=this->city=this->color=this->company=this->description=this->name=this->owner=this->type=this->owner_phone_number=this->expiration_date=this->production_date="Unknown";
    this->number=this->cost=this->discount_percent=this->id=this->num_of_sell=this->profit_percent=this->volume=this->weight=0;
    this->is_confirm=this->is_deleted=this->is_electric=false;
    return;
}

void Commodity::set_owner(const string &owner)
{
    this->owner = owner;
    return;
}

const string & Commodity::get_owner() const
{
    return this->owner;
}

void Commodity::set_owner_phone_number(const string &phone_number)
{
    this->owner_phone_number = phone_number;
    return;
}

const string & Commodity::get_owner_phone_number() const
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

void Commodity::set_name(const string &name)
{
    this->name = name;
    return;
}

const string & Commodity::get_name() const
{
    return this->name;
}

void Commodity::set_category(const string &category)
{
    this->category = category;
    return;
}

const string & Commodity::get_category() const
{
    return this->category;
}

void Commodity::set_type(const string &type)
{
    this->type = type;
    return;
}

const string & Commodity::get_type() const
{
    return  this->type;
}

void Commodity::set_company(const string & company)
{
    this->company = company;
    return;
}

const string &Commodity::get_company() const
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

void Commodity::set_city(const string & city)
{
    this->city = city;
    return;
}

const string &Commodity::get_city() const
{
    return this->city;
}

void Commodity::set_address(const string & address)
{
    this->address = address;
    return;
}

const string & Commodity::get_address() const
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

void Commodity::set_color(const string & color)
{
    this->color = color;
    return;
}

const string & Commodity::get_color() const
{
    return this->color;
}

void Commodity::set_production_date(const string & production_date)
{
    this->production_date = production_date;
    return;
}

const string & Commodity::get_production_date() const
{
    return this->production_date;
}

void Commodity::set_expiration_date(const string & expiration_date)
{
    this->expiration_date = expiration_date;
    return;
}

const string & Commodity::get_expiration_date() const
{
    return this->expiration_date;
}

void Commodity::set_description(const string & description)
{
    this->description = description;
    return;
}

const string & Commodity::get_description() const
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

void Commodity::set_is_confirm(bool is_confirm)
{
    this->is_confirm = is_confirm;
    return;
}

bool Commodity::get_is_confirm() const
{
    return this->is_confirm;
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
