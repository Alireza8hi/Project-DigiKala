#ifndef DATABASEUSER_H
#define DATABASEUSER_H

#include "Commodity.h"

class DataBaseUser
{
public:
    string username;
    string password;
    string role;
    int income;
    deque<Comment> comments;
    deque<Commodity> favorites;
    deque<Commodity> buy_list;
    string name;
    string family;
    string national_code;
    string email;
    string address;
    string phone_number;
    string city;
    string province;
    int sex;

    DataBaseUser();
    ~DataBaseUser();
    int readuser(const char * file , int seekbeg);
    void writeuser(const char * file ,int seekbeg);

public slots:
       void save_data();

};
void pull_data();
void push_data();

#endif // DATABASEUSER_H
