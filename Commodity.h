#ifndef COMMODITY_H
#define COMMODITY_H

#include <QObject>
#include "Comment.h"
#include "Complaint.h"
#include <ctime>

class Commodity : public QObject
{
    Q_OBJECT
private:
    Comment comments[100];
    Complaint complaints[10];
    string owner;
    string owner_phone_number;
    int number;
    int id;
    string name;
    string category;
    string type;
    string company;
    bool is_electric;
    string city;
    string address;
    int cost;
    int num_of_sell;
    int discount_percent;
    string color;
    string production_date;
    string expiration_date;
    string description;
    double weight;
    double volume;
    bool is_deleted;
    bool is_confirm;
    int profit_percent;
public:
    Commodity();
    Commodity(Commodity& other);
    Commodity& operator=(const Commodity& other);
    ~Commodity();
//    void add_comment(tm now_time,int sender_id,string description);
//    void delete_comment();
//    void add_complaint(tm now_time,int sender_id,string description);
//    void delete_complaint();
    void set_owner(const string& owner);
    const string &get_owner()const;
    void set_owner_phone_number(const string & phone_number);
    const string &get_owner_phone_number()const;
    void set_number(int number);
    int get_number()const;
    void set_id(int id);
    int get_id()const;
    void set_name(const string & name);
    const string &get_name()const;
    void set_category(const string & category);
    const string &get_category()const;
    void set_type(const string & type);
    const string &get_type()const;
    void set_company(const string & company);
    const string & get_company()const;
    void set_is_electric(bool is_electric);
    bool get_is_electric()const;
    void set_city(const string &city);
    const string & get_city()const;
    void set_address(const string & address);
    const string & get_address()const;
    void set_cost(int cost);
    int get_cost()const;
    void set_num_of_sell(int num_of_sell);
    int get_num_of_sell()const;
    void set_discount_percent(int discount_percent);
    int get_discount_percent()const;
    void set_color(const string & color);
    const string & get_color()const;
    void set_production_date(const string & production_date);
    const string & get_production_date()const;
    void set_expiration_date(const string & expiration_date);
    const string & get_expiration_date()const;
    void set_description(const string & description);
    const string & get_description()const;
    void set_weight(double weight);
    double get_weight()const;
    void set_volume(double volume);
    double get_volume()const;
    void set_is_deleted(bool is_deleted);
    bool get_is_deleted()const;
    void set_is_confirm(bool is_confirm);
    bool get_is_confirm()const;
    void set_profit_percent(int profit_percent);
    int get_profit_percent()const;
};

#endif // COMMODITY_H
