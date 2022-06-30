#ifndef User_H
#define User_H

#include <QObject>
#include <deque>
#include "human.h"
#include "Comment.h"
#include "Commodity.h"


class User : public QObject , public Human
{
    Q_OBJECT

private:
    QString username;
    QString password;
    QString role;
    int income;
    deque<Comment> comments;
    deque<Commodity> favorites;
public:
    User();
    User(User& other);
    virtual ~User();
    void set_income(int income);
    int get_income()const;
    bool change_password();
    bool change_username();
    QString get_username() const;
    QString get_password() const;
    QString get_role() const;
    void set_username(const QString uname);
    void set_password(const QString upassword);
    void set_role(const QString urole);
    User& operator=(const User& s);
    void push_front_comments(const Comment& comment);
    void push_front_favorites(const Commodity commodit);
    Comment get_comment(int index);
    Commodity get_commodity(int index);
    void readuser(FILE* fuser);
    void writeuser(FILE* fuser);
    //حدف کالا فیوریت
    // حذف کامنت

};

#endif // User_H
