#ifndef SELLER_H
#define SELLER_H
#include "User.h"

class Seller : public User
{
private:
    int sales_revenue;
public:
    Seller();
    ~Seller();
    void set_sales_revenue(int sales_revenue);
    int get_sales_revenue()const;
};

#endif // SELLER_H
