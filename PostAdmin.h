#ifndef POSTADMIN_H
#define POSTADMIN_H
#include "user.h"

class PostAdmin : public User
{
private:
    int income;
public:
    PostAdmin();
    ~PostAdmin();
    void set_income(int income);
    int get_income()const;
};

#endif // POSTADMIN_H
