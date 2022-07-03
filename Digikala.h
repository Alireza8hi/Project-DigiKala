#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include"Commodity.h"
#include <deque>
#include <User.h>
#include "ReviewAdmin.h"
#include "SupportAdmin.h"
#include "StoreAdmin.h"
#include "Seller.h"
#include "PostAdmin.h"
#include "MainAdmin.h"
#include "Customer.h"
#include "Commodity.h"

class DigiKala : public QObject
{
    Q_OBJECT
private:
    User* main_admin;
    User* review_admin;
    User* post_admins;
    std::deque<User*> store_admins;
    std::deque<User*> support_admins;
    std::deque<User*> customers;
    std::deque<User*> sellers;
    std::deque<Commodity*> commodities;
    std::deque<int> sold_commodities_id;
    int num_of_seller;
    int num_of_customer;
    int num_of_support_admin;
    int num_of_store_admin;
    int num_of_commodities;
    int num_of_sell_sold_commonities;
    int num_of_admins;
    int income;
    int money;
    DigiKala();

public:
    static DigiKala& make_object();
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
    void set_num_of_sell_sold_commonities(int num_of_sell_sold_commonities);
    int get_num_of_sell_sold_commonities()const;
    void set_num_of_admins(int num_of_admins);
    int get_num_of_admins()const;
    void set_income(int income);
    int get_income()const;
    void set_money(int money);
    int get_money()const;
    User* get_main_admin();
    User* get_review_admin();
    User* get_post_admin(int number);
    User* get_support_admin(int number);
    User* get_store_admin(int number);
    User* get_customer(int number);
    User* get_seller(int number);
    void add_customer(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
    void add_seller(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
};

static DigiKala* site = &DigiKala::make_object();
static User* this_user;
extern User userglobal;

#endif // DIGIKALA_H
