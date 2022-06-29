#ifndef STOREADMIN_H
#define STOREADMIN_H
#include "user.h"

class StoreAdmin : public User
{
private:
    int income;
public:
    StoreAdmin();
    ~StoreAdmin();
    void set_income(int income);
    int get_income()const;
};

#endif // STOREADMIN_H
