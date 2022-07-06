#ifndef DATABASEOTHER_H
#define DATABASEOTHER_H

#include "Commodity.h"

class DataBaseOther
{
public:
    deque<Commodity> commodities;
    deque<int> sold_commodities_id;
    int num_of_seller;
    int num_of_customer;
    int num_of_support_admin;
    int num_of_store_admin;
    int num_of_commodities;
    int num_of_sold_commodities;
    int num_of_admins;
    int site_income;
    int money;

    DataBaseOther();
    ~DataBaseOther();

};

#endif // DATABASEOTHER_H
