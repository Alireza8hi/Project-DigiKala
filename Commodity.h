#ifndef COMMODITY_H
#define COMMODITY_H

#include <QObject>
#include <deque>
#include "Comment.h"
#include "Complaint.h"
#include <ctime>

class Commodity : public QObject
{
    Q_OBJECT
private:
    std::deque<Comment> comments;
    std::deque<Complaint> complaints;
    QString owner;
    int owner_number;
    int numbers;
    int id;
    QString name;
    QString category;
    QString type;
    QString company;
    bool is_electric;
    QString city;
    int cost;
    int num_of_sell;
    int discount_percent;
    QString color;
    tm production_date;
    tm expiration_date;
    QString description;
    double weight;
    double volume;
    bool is_deleted;
    int profit_percent;
public:
    Commodity();
};

#endif // COMMODITY_H
