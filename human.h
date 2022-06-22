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
    long long int phone;
public:
	Human();
	~Human();
    QString getname()const;
    QString getfamily()const;
    long long int getncode()const;
    QString getemail()const;
    QString getadress()const;
    long long int getphone()const;
    void setname(const QString namef);
    void setfamily(const QString familyf);
    void setncode(const long long int ncode) ;
    void setemail(const QString em);
    void setadress(const QString adr);
    void setphone(const long long int  pho);
};
#endif
