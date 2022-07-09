#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include<QMessageBox>
#include<QAbstractButton>
#include"Commodity.h"
#include <User.h>
#include "Commodity.h"
#include "accountwindow.h"

class DigiKala : public QObject
{
    Q_OBJECT
private:
    User users[500];
    Commodity commodities[1500];
    int sold_commodities_id[1500];
    int num_of_seller;
    int num_of_customer;
    int num_of_support_admin;
    int num_of_store_admin;
    int num_of_commodities;
    int num_of_sold_commodities;
    int num_of_users;
    int income;
    int money;

public:
    DigiKala();
    void show_commodity(string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity,long max_cost,int min_cost);
    ~DigiKala();
    void set_num_of_seller(int num_of_seller);
    int get_num_of_seller()const;
    void set_num_of_customer(int num_of_customer);
    int get_num_of_customer()const;
    void set_num_of_support_admin(int num_of_support_admin);
    int get_num_of_support_admin()const;
    void set_num_of_store_admin(int num_of_store_admin);
    int get_num_of_store_admin()const;
    void set_num_of_commodities(int num_of_commodities);
    int get_num_of_commodities()const;
    void set_num_of_sold_commodities(int num_of_sold_commodities);
    int get_num_of_sold_commodities()const;
    void set_num_of_users(int num_of_users);
    int get_num_of_users()const;
    void set_income(int income);
    int get_income()const;
    void set_money(int money);
    int get_money()const;
    User& get_user(int number);
    Commodity& get_commodity(int number);
    void set_sold_commodities_id(int sold_commodities_id);
    int get_sold_commodities_id(int number)const;
    void add_customer(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
    void add_seller(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
    int read_digi_kala(const char * file , int seekbeg);
    void write_digi_kala(const char * file ,int seekbeg);
};

extern DigiKala site;
extern User* this_user;

#endif // DIGIKALA_H
