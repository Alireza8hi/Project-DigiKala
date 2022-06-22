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
    user& operator=(const user& s);
private:
    Ui::user *ui;
    QString username;
    QString password;
    QString role;
    //Comment* comments;
    //Commodity* favorites;
};
#endif // USER_H
