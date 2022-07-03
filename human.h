#ifndef HumanSDFGHJ
#define HumanSDFGHJ
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string name ;
    string family;
    string national_code;
    string email ;
    string adress;
    string phone_number;
    string city;
    string province;
    int sex;
public:
	Human();
	~Human();
    string get_name()const;
    string get_family()const;
    string get_ncode()const;
    string get_email()const;
    string get_adress()const;
    string get_phone_number()const;
    string get_city()const;
    string get_province()const;
    int get_sex()const;
    void set_name(const string namef);
    void set_family(const string familyf);
    void set_ncode(const string ncode) ;
    void set_email(const string em);
    void set_adress(const string adr);
    void set_phone_number(const string  pho);
    void set_city(const string city);
    void set_province(const string province);
    void set_sex(const int se );
};
#endif
