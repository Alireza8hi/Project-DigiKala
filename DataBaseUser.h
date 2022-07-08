/*#ifndef DATABASEUSER_H
#define DATABASEUSER_H

#include "Commodity.h"

class DataBaseUser
{
public:
    string username;
    string password;
    string role;
    int income;
    vector<Comment> comments;
    vector<Commodity> favorites;
    vector<Commodity> buy_list;
    string name;
    string family;
    string national_code;
    string email;
    string address;
    string phone_number;
    string city;
    string province;
    int sex;

    bool is_null;

    DataBaseUser();
    ~DataBaseUser();
    int readuser(const char * file , int seekbeg);
    void writeuser(const char * file ,int seekbeg);

public slots:
       static void save_data();

};
void pull_data();
void push_data();

#endif // DATABASEUSER_H
*/
