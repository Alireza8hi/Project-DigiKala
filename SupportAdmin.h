#ifndef SUPPORTADMIN_H
#define SUPPORTADMIN_H
#include "user.h"

class SupportAdmin : public User
{
private:
    int income;
public:
    SupportAdmin();
    ~SupportAdmin();
    void set_income(int income);
    int get_income()const;
};

#endif // SUPPORTADMIN_H
