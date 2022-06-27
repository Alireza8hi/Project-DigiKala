#ifndef User_H
#define User_H

#include <QObject>
#include "human.h"

class User : public QObject , public Human
{
    Q_OBJECT

public:
    User();
    ~User();
    bool change_password();
    bool change_username();
    QString get_username() const;
    QString get_password() const;
    QString get_role() const;
    void set_username(const QString uname);
    void set_password(const QString upassword);
    void set_role(const QString urole);
    User& operator=(const User& s);
private:
    QString username;
    QString password;
    QString role;
    //Comment* comments;
    //Commodity* favorites;



};

#endif // User_H
