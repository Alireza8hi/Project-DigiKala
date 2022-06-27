#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QDialog>
#include "User.h"

namespace Ui {
class Customer;
}

class Customer : public QDialog,public User
{

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

private:
    Ui::Customer *ui;
};

#endif // CUSTOMER_H
