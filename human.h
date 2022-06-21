#ifndef HumanSDFGHJ
#define HumanSDFGHJ
#include <iostream>
#include <string>
using namespace std;
class Human
{
private:
    string name_and_family ;
	long long int national_code;
    string email ;
    string adress;
    long long int phone;
public:
	Human();
	~Human();
    string getnameandfamily();
    long long int getncode();
    string getemail();
    string getadress();
    long long int getphone();
};
#endif
