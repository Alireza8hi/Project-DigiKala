#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include"Commodity.h"
#include <deque>
#include <User.h>

//user userglobal;
class DigiKala : public QObject
{
    Q_OBJECT
private:
//    std::deque<int> commodities_id;
//    std::deque<int> sold_commodities_id;
//    std::deque<int> admins_id;
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

};

#endif // DIGIKALA_H
