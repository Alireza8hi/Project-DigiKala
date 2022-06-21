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
    string getnameandfamily()const;
    long long int getncode()const;
    string getemail()const;
    string getadress()const;
    long long int getphone()const;
    void setnameandfamily(const string name);
    void setncode(const long long int ncode) ;
    void setemail(const string em);
    void setadress(const string adr);
    void setphone(const long long int  pho);
};
#endif
