#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include<QMessageBox>
#include<QAbstractButton>
#include"Commodity.h"
#include <vector>
#include <User.h>
#include "DataBaseUser.h"
#include "ReviewAdmin.h"
#include "SupportAdmin.h"
#include "StoreAdmin.h"
#include "Seller.h"
#include "PostAdmin.h"
#include "MainAdmin.h"
#include "Customer.h"
#include "Commodity.h"
#include "accountwindow.h"

class DigiKala : public QObject
{
    Q_OBJECT
private:
    User main_admin;
    User review_admin;
    User post_admins[31];
    vector<User> store_admins;
    vector<User> support_admins;
    vector<User> customers;
    vector<User> sellers;
    vector<Commodity> commodities;
    vector<int> sold_commodities_id;
    int num_of_seller;
    int num_of_customer;
    int num_of_support_admin;
    int num_of_store_admin;
    int num_of_commodities;
    int num_of_sold_commodities;
    int num_of_admins;
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
    void set_num_of_admins(int num_of_admins);
    int get_num_of_admins()const;
    void set_income(int income);
    int get_income()const;
    void set_money(int money);
    int get_money()const;
    User& get_main_admin();
    User& get_review_admin();
    User& get_post_admin(int number);
    User& get_support_admin(int number);
    User& get_store_admin(int number);
    User& get_customer(int number);
    User& get_seller(int number);
    void set_commodities(vector<Commodity> commodities);
    //vector<Commodity> get_commodities()const;
    void set_sold_commodities_id(vector<int> sold_commodities_id);
    vector<int> get_sold_commodities_id()const;
    void add_customer(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
    void add_seller(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex);
    int read_digi_kala(const char * file , int seekbeg);
    void write_digi_kala(const char * file ,int seekbeg);
};

extern DigiKala site;
extern User* this_user;
//extern DataBaseUser data_base_user[1000];

#endif // DIGIKALA_H
