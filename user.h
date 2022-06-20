#ifndef USER_H
#define USER_H

#include <QDialog>
#include "human.h"

QT_BEGIN_NAMESPACE
namespace Ui { class user; }
QT_END_NAMESPACE

class user : public QDialog , public Human
{
    Q_OBJECT

public:
    user(QWidget *parent = nullptr);
    ~user();
    bool change_password();
    bool change_username();
    bool set_nameandfamily();
    bool set_email();
    bool set_phone();
    bool set_ncode();
private:
    Ui::user *ui;
    string username;
    string password;
    string role;
    //Comment* comments;
    //Commodity* favorites;
};
#endif // USER_H
