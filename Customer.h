#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "User.h"


class Customer : public User
{
private:
    int sales_revenue;
public:
    Customer();
    ~Customer();
    void set_sales_revenue(int sales_revenue);
    int get_sales_revenue()const;
};

#endif // CUSTOMER_H
