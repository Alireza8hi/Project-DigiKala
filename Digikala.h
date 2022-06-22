#ifndef DIGIKALA_H
#define DIGIKALA_H

#include<QObject>
#include"Commodity.h"
#include <deque>

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

public:
    DigiKala();
    ~DigiKala();

};

#endif // DIGIKALA_H
