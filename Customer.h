#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QMainWindow>
#include "User.h"

namespace Ui {
class Customer;
}

class Customer : public QMainWindow,User
{

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();
    void set_income(int income);
    int get_income()const;

private:
    Ui::Customer *ui;
    int income;
};

#endif // CUSTOMER_H
