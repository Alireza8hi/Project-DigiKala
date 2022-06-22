
#include <iostream>
using namespace std;
#include "human.h"


Human::Human()
{
    this->name=this->family = "Guest";
    this->email = "Guest@gmail.com";
    this->adress = "iran";
    this->national_code = this->phone = 0;
	return;
}


Human::~Human()
{
    this->name = this->email = this->adress = nullptr;
    this->national_code = this->phone = 0;
    return;
}

QString Human::getname()const
{
    return this->name;
}

QString Human::getfamily() const
{
    return this->family;
}

long long Human::getncode()const
{
    return this->national_code;
}

QString Human::getemail()const
{
    return this->email;
}

QString Human::getadress()const
{
    return this->adress;
}

long long Human::getphone()const
{
    return this->phone;
}

void Human::setname(const QString namef)
{
    this->name=namef;
    return;
}

void Human::setfamily(const QString familyf)
{
    this->family=familyf;
    return;
}

void Human::setncode(const long long int ncode)
{
    this->national_code=ncode;
    return;
}

void Human::setemail(const QString em)
{
    this->email=em;
    return;
}

void Human::setadress(const QString adr)
{
    this->adress=adr;
    return;
}

void Human::setphone(const long long int pho)
{
    this->phone=pho;
    return;
}
