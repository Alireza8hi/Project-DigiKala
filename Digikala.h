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
    MainAdmin main_admin;
    ReviewAdmin review_admin;
    PostAdmin *post_admin;
    std::deque<StoreAdmin> store_admins;
    std::deque<SupportAdmin> support_admins;
    std::deque<Customer> customers;
    std::deque<Seller> sellers;
    std::deque<Commodity> commodities;
    std::deque<int> sold_commodities_id;
    int num_of_commodities;
    int num_of_sell_sold_commonities;
    int num_of_admins;
    int income;
    int money;
    int sales_revenue;
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
    void set_sales_revenue(int sales_revenue);
    int get_sales_revenue()const;
    MainAdmin get_main_admin();
    ReviewAdmin get_review_admin();
    PostAdmin get_post_admin(int number);

};

static DigiKala* site = &DigiKala::make_object();
extern User userglobal;

#endif // DIGIKALA_H
