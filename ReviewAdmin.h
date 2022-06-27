#ifndef REVIEWADMIN_H
#define REVIEWADMIN_H
#include "User.h"

class ReviewAdmin : public User
{
private:
    int income;
public:
    ReviewAdmin();
    ~ReviewAdmin();
    void set_income(int income);
    int get_income()const;
};

#endif // REVIEWADMIN_H
