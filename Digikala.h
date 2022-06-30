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
    User* post_admin;
    std::deque<User*> store_admins;
    std::deque<User*> support_admins;
    std::deque<User*> customers;
    std::deque<User*> sellers;
    std::deque<Commodity*> commodities;
    std::deque<int> sold_commodities_id;
    int num_of_commodities;
    int num_of_sell_sold_commonities;
    int num_of_admins;
    int income;
    int money;
    DigiKala();

public:
    static DigiKala& make_object();
    ~DigiKala();
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
    User get_post_admin(int number);

};

static DigiKala* site = &DigiKala::make_object();
extern User userglobal;

#endif // DIGIKALA_H
