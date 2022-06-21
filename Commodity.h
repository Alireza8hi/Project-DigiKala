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
//    std::deque<Comment> comments;
//    std::deque<Complaint> complaints;
    QString owner;
    long long int owner_phone_number;
    int number;
    int id;
    QString name;
    QString category;
    QString type;
    QString company;
    bool is_electric;
    QString city;
    QString address;
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
    ~Commodity();
//    void add_comment(tm now_time,QString sender,QString description);
//    void delete_comment();
//    void add_complaint(tm now_time,QString sender,QString description);
//    void delete_complaint();
    void set_owner(QString owner);
    QString get_owner()const;
    void set_owner_phone_number(long long int phone_number);
    long long int get_owner_phone_number()const;
    void set_number(int number);
    int get_number()const;
    void set_id(int id);
    int get_id()const;
    void set_name(QString name);
    QString get_name()const;
    void set_category(QString category);
    QString get_category()const;
    void set_type(QString type);
    QString get_type()const;
    void set_company(QString company);
    QString get_company()const;
    void set_is_electric(bool is_electric);
    bool get_is_electric()const;
    void set_city(QString city);
    QString get_city()const;
    void set_address(QString address);
    QString get_address()const;
    void set_cost(int cost);
    int get_cost()const;
    void set_num_of_sell(int num_of_sell);
    int get_num_of_sell()const;
    void set_discount_percent(int discount_percent);
    int get_discount_percent()const;
    void set_color(QString color);
    QString get_color()const;
    void set_production_date(tm production_date);
    tm get_production_date()const;
    void set_expiration_date(tm expiration_date);
    tm get_expiration_date()const;
    void set_description(QString description);
    QString get_description()const;
    void set_weight(double weight);
    double get_weight()const;
    void set_volume(double volume);
    double get_volume()const;
    void set_is_deleted(bool is_deleted);
    bool get_is_deleted()const;
    void set_profit_percent(int profit_percent);
    int get_profit_percent()const;
};

#endif // COMMODITY_H
