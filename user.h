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
    vector<Comment> comments;
    vector<int> favorites_id;
    vector<int> buy_list_id;
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
    User& operator=(const User& s);
    void push_front_comments(const Comment& comment);
    void push_front_favorites_id(const int commodit);
    Comment get_comment(int index);
    int get_commodity(int index);
    //حدف کالا فیوریت
    // حذف کامنت
};

#endif // User_H
