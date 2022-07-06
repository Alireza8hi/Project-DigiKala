#ifndef User_H
#define User_H

#include <QObject>
#include <deque>
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
    deque<Comment> comments;
    deque<Commodity> favorites;
    deque<Commodity> buy_list;
public:
    User();
    User(User& other);
    ~User();
    void set_income(int income);
    int get_income()const;
    bool change_password();
    bool change_username();
    string get_username() const;
    string get_password() const;
    string get_role() const;
    void set_username(const string uname);
    void set_password(const string upassword);
    void set_role(const string urole);
    User& operator=(const User& s);
    void push_front_comments(const Comment& comment);
    void push_front_favorites(const Commodity commodit);
    Comment get_comment(int index);
    Commodity get_commodity(int index);
    //حدف کالا فیوریت
    // حذف کامنت
};

#endif // User_H
