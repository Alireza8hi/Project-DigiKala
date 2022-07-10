#include <stdlib.h>
#include "Digikala.h"
#include "User.h"

User::User()
{
    this->password=this->username=this->role="";
    this->income=this->money_paid=this->num_of_commodity_purchased=0;
}

User::User(User &other)
{
    this->username=other.username;
    this->password=other.password;
    this->role=other.role;
    this->income=other.income;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_address(other.get_address());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    this->set_city(other.get_city());
    this->set_province(other.get_province());
    this->set_sex(other.get_sex());
    this->money_paid=other.money_paid;
    this->num_of_commodity_purchased=other.num_of_commodity_purchased;
    for(int counter=0;counter<100;counter++)
    {
        this->set_favorites_id(counter,other.get_favorites_id(counter));
        this->set_buy_list_id(counter,other.get_buy_list_id(counter));
    }
    return;
}

User::User(User &&other)
{
    this->username=other.username;
    this->password=other.password;
    this->role=other.role;
    this->income=other.income;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_address(other.get_address());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    this->set_city(other.get_city());
    this->set_province(other.get_province());
    this->set_sex(other.get_sex());
    this->money_paid=other.money_paid;
    this->num_of_commodity_purchased=other.num_of_commodity_purchased;
    for(int counter=0;counter<100;counter++)
    {
        this->set_favorites_id(counter,other.get_favorites_id(counter));
        this->set_buy_list_id(counter,other.get_buy_list_id(counter));
    }

    other.password=other.username=other.role="";
    other.income=other.money_paid=other.num_of_commodity_purchased=0;
    other.set_name(nullptr);
    other.set_family(nullptr);
    other.set_email(nullptr);
    other.set_address(nullptr);
    other.set_phone_number(nullptr);
    other.set_ncode(nullptr);
    other.set_city(nullptr);
    other.set_province(nullptr);
    other.set_sex(0);
    return;
}


User::~User()
{
    this->password=this->username=this->role="";
    this->income=this->money_paid=this->num_of_commodity_purchased=0;
    return;
}

void User::set_income(int income)
{
    this->income = income;
    return;
}

int User::get_income() const
{
    return this->income;
}

const string& User::get_username() const
{
    return this->username;
}

const string & User::get_password() const
{
    return this->password;
}

const string & User::get_role() const
{
    return this->role;
}

void User::set_username(const string& uname)
{
    this->username=uname;
    return;
}

void User::set_password(const string& upassword)
{
    this->password=upassword;
    return;
}

void User::set_role(const string& urole)
{
    this->role=urole;
    return;
}

User& User::operator=(User &other)
{
    this->username=other.username;
    this->password=other.password;
    this->role=other.role;
    this->income=other.income;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_address(other.get_address());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    this->set_city(other.get_city());
    this->set_province(other.get_province());
    this->set_sex(other.get_sex());
    this->money_paid=other.money_paid;
    this->num_of_commodity_purchased=other.num_of_commodity_purchased;
    for(int counter=0;counter<100;counter++)
    {
        this->set_favorites_id(counter,other.get_favorites_id(counter));
        this->set_buy_list_id(counter,other.get_buy_list_id(counter));
    }
    return *this;
}

User& User::operator=(User &&other)
{
    this->username=other.username;
    this->password=other.password;
    this->role=other.role;
    this->income=other.income;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_address(other.get_address());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    this->set_city(other.get_city());
    this->set_province(other.get_province());
    this->set_sex(other.get_sex());
    this->money_paid=other.money_paid;
    this->num_of_commodity_purchased=other.num_of_commodity_purchased;
    for(int counter=0;counter<100;counter++)
    {
        this->set_favorites_id(counter,other.get_favorites_id(counter));
        this->set_buy_list_id(counter,other.get_buy_list_id(counter));
    }
    other.password=other.username=other.role="";
    other.income=other.money_paid=other.num_of_commodity_purchased=0;
    other.set_name(nullptr);
    other.set_family(nullptr);
    other.set_email(nullptr);
    other.set_address(nullptr);
    other.set_phone_number(nullptr);
    other.set_ncode(nullptr);
    other.set_city(nullptr);
    other.set_province(nullptr);
    other.set_sex(0);
    return *this;
}

void User::set_favorites_id(int number,int fv)
{
    this->favorites_id[number] = fv;
    return;
}

int User::get_favorites_id(int number)
{
    return this->favorites_id[number];
}

void User::set_buy_list_id(int number, int bl)
{
    this->buy_list_id[number] = bl;
    return;
}

int User::get_buy_list_id(int number)
{
    return this->buy_list_id[number];
}

void User::set_money_paid(int money_paid)
{
    this->money_paid = money_paid;
    return;
}

int User::get_money_paid() const
{
    return this->money_paid;
}

void User::set_num_of_commodity_purchased(int num_of_commodity_purchased)
{
    this->num_of_commodity_purchased = num_of_commodity_purchased;
    return;
}

int User::get_num_of_commodity_purchased() const
{
    return this->num_of_commodity_purchased;
}

void User::set_num_of_favorite(int num_of_favorite)
{
    this->num_of_favorite = num_of_favorite;
    return;
}

int User::get_num_of_favorite() const
{
    return this->num_of_favorite;
}

void User::set_num_of_buy_list(int num_of_buy_list)
{
    this->num_of_buy_list = num_of_buy_list;
    return;
}

int User::get_num_of_buy_list() const
{
    return this->num_of_buy_list;
}

