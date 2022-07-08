#include <stdlib.h>
#include "Digikala.h"
#include "User.h"

User::User()
{
    this->password=this->username=this->role="";
    this->income=0;
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
    //this->comments=other.comments;
    //this->favorites_id=other.favorites_id;
    //this->buy_list_id=other.buy_list_id;
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
    //this->comments=other.comments;
    //this->favorites_id=other.favorites_id;
    //this->buy_list_id=other.buy_list_id;
    return;
}

User::~User()
{
    this->password=this->username=this->role=nullptr;
    this->income=0;
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

User& User::operator=(const User& s)
{
  this->~User();
  this->password=s.password;
  this->username=s.username;
  this->role=s.role;
  this->set_name(s.get_name());
  this->set_family(s.get_family());
  this->set_email(s.get_email());
  this->set_address(s.get_address());
  this->set_ncode(s.get_ncode());
  this->set_phone_number(s.get_phone_number());
    this->set_city(s.get_city());
    this->set_province(s.get_province());
    this->set_sex(s.get_sex());
  //this->comments=s.comments;
  //this->favorites=s.favorites;
    return *this;
}

void User::push_front_comments(const Comment& comment)
{
    //this->comments.push_front(comment);
    return;
}

void User::push_front_favorites_id(const int commodity)
{
    //this->favorites_id.push_front(commodity);
    return;
}

Comment User::get_comment(int index)
{
    return this->comments.at(index);
}

int User::get_commodity(int index)
{
    return this->favorites_id.at(index);
}

