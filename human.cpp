
#include <iostream>
using namespace std;
#include "human.h"


Human::Human()
{
    this->name_and_family = "Guest";
    this->email = "Guest@gmail.com";
    this->adress = "iran";
	this->national_code = 0;
	this->phone = 0;
	return;
}


Human::~Human()
{
	
    return;
}

string Human::getnameandfamily()
{
    return this->name_and_family;
}

long long Human::getncode()
{
    return this->national_code;
}

string Human::getemail()
{
    return this->email;
}

string Human::getadress()
{
    return this->adress;
}

long long Human::getphone()
{
    return this->phone;
}
