#include <iostream>
#include "human.h"

using namespace std;

Human::Human()
{
    this->name=this->family = "Guest";
    this->email = "Guest@gmail.com";
    this->adress = "iran";
    this->national_code ="0";
    this->phone_number = "0";
    this->sex=0;
	return;
}


Human::~Human()
{
    this->name = this->email = this->adress = this->phone_number = this->national_code = nullptr;
    this->sex=0;
    return;
}

QString Human::get_name()const
{
    return this->name;
}

QString Human::get_family() const
{
    return this->family;
}

QString Human::get_ncode()const
{
    return this->national_code;
}

QString Human::get_email()const
{
    return this->email;
}

QString Human::get_adress()const
{
    return this->adress;
}

QString Human::get_phone_number()const
{
    return this->phone_number;
}

int Human::get_sex() const
{
    return this->sex;
}

void Human::set_name(const QString namef)
{
    this->name=namef;
    return;
}

void Human::set_family(const QString familyf)
{
    this->family=familyf;
    return;
}

void Human::set_ncode(const QString ncode)
{
    this->national_code=ncode;
    return;
}

void Human::set_email(const QString em)
{
    this->email=em;
    return;
}

void Human::set_adress(const QString adr)
{
    this->adress=adr;
    return;
}

void Human::set_phone_number(const QString pho)
{
    this->phone_number=pho;
    return;
}

void Human::set_sex(const int se)
{
    this->sex=se;
    return;
}
