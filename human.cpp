#include <iostream>
#include "human.h"

using namespace std;

Human::Human()
{
    this->name=this->family = "Guest";
    this->email = "Guest@gmail.com";
    this->address = "-";
    this->national_code ="-";
    this->phone_number = "-";
    this->city = "-";
    this->province = "-";
    this->sex=0;
	return;
}


Human::~Human()
{
    this->name = this->family = this->email = this->address = this->phone_number = this->national_code = this->province = this->city = nullptr;
    this->sex=0;
    return;
}

const string &Human::get_name()const
{
    return this->name;
}

const string &Human::get_family() const
{
    return this->family;
}

const string &Human::get_ncode()const
{
    return this->national_code;
}

const string &Human::get_email()const
{
    return this->email;
}

const string &Human::get_address()const
{
    return this->address;
}

const string & Human::get_phone_number()const
{
    return this->phone_number;
}

const string & Human::get_city() const
{
    return this->city;
}

const string & Human::get_province() const
{
    return this->province;
}

int Human::get_sex() const
{
    return this->sex;
}

void Human::set_name(const string& namef)
{
    this->name=namef;
    return;
}

void Human::set_family(const string& familyf)
{
    this->family=familyf;
    return;
}

void Human::set_ncode(const string& ncode)
{
    this->national_code=ncode;
    return;
}

void Human::set_email(const string& em)
{
    this->email=em;
    return;
}

void Human::set_address(const string& adr)
{
    this->address=adr;
    return;
}

void Human::set_phone_number(const string& pho)
{
    this->phone_number=pho;
    return;
}

void Human::set_city(const string& city)
{
    this->city = city;
    return;
}

void Human::set_province(const string& province)
{
    this->province=province;
    return;
}

void Human::set_sex(const int se)
{
    this->sex=se;
    return;
}
