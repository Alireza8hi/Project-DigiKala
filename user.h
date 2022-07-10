#ifndef User_H
#define User_H

#include <QObject>
#include <vector>
#include <fstream>
#include <iostream>
#include "human.h"
#include "Comment.h"
#include "Commodity.h"
using namespace std;

class User : public QObject , public Human
{
    Q_OBJECT

private:
    string username;
    string password;
    string role;
    int income;
    int favorites_id[100];
    int buy_list_id[100];
    int money_paid;
    int num_of_commodity_purchased;
    int num_of_favorite;
    int num_of_buy_list;
public:
    User();
    User(User& other);
    User(User&& other);
    ~User();
    void set_income(int income);
    int get_income()const;
    const string & get_username() const;
    const string& get_password() const;
    const string& get_role() const;
    void set_username(const string& uname);
    void set_password(const string& upassword);
    void set_role(const string& urole);
    User& operator=(User &other);
    User& operator=(User &&other);
    void set_favorites_id(int number,int fv);
    int get_favorites_id(int number);
    void set_buy_list_id(int number,int bl);
    int get_buy_list_id(int number);
    void set_money_paid(int money_paid);
    int get_money_paid()const;
    void set_num_of_commodity_purchased(int num_of_commodity_purchased);
    int get_num_of_commodity_purchased()const;
    void set_num_of_favorite(int num_of_favorite);
    int get_num_of_favorite()const;
    void set_num_of_buy_list(int num_of_buy_list);
    int get_num_of_buy_list()const;

};

#endif // User_H
