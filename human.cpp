
#include <iostream>
using namespace std;
#include "human.h"


Human::Human()
{
    this->name_and_family = "Guest";
    this->email = "Guest@gmail.com";
    this->adress = "iran";
    this->national_code = this->phone = 0;
	return;
}


Human::~Human()
{
    this->name_and_family = this->email = this->adress = nullptr;
    this->national_code = this->phone = 0;
    return;
}

string Human::getnameandfamily()const
{
    return this->name_and_family;
}

long long Human::getncode()const
{
    return this->national_code;
}

string Human::getemail()const
{
    return this->email;
}

string Human::getadress()const
{
    return this->adress;
}

long long Human::getphone()const
{
    return this->phone;
}

void Human::setnameandfamily(const string name)
{
    this->name_and_family=name;
    return;
}

void Human::setncode(const long long int ncode)
{
    this->national_code=ncode;
    return;
}

void Human::setemail(const string em)
{
    this->email=em;
    return;
}

void Human::setadress(const string adr)
{
    this->adress=adr;
    return;
}

void Human::setphone(const long long int pho)
{
    this->phone=pho;
    return;
}
