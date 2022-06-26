#ifndef HumanSDFGHJ
#define HumanSDFGHJ
#include <iostream>
#include <QString>
using namespace std;
class Human
{
private:
    QString name ;
    QString family;
	long long int national_code;
    QString email ;
    QString adress;
    QString phone_number;
public:
	Human();
	~Human();
    QString get_name()const;
    QString get_family()const;
    long long int get_ncode()const;
    QString get_email()const;
    QString get_adress()const;
    QString get_phone_number()const;
    void set_name(const QString namef);
    void set_family(const QString familyf);
    void set_ncode(const long long int ncode) ;
    void set_email(const QString em);
    void set_adress(const QString adr);
    void set_phone_number(const QString  pho);
};
#endif
