#ifndef POSTADMIN_H
#define POSTADMIN_H
#include "user.h"

class PostAdmin : public User
{
private:
    int income;
    string province;
public:
    PostAdmin();
    ~PostAdmin();
    void set_income(int income);
    int get_income()const;
    void set_province(string province);
    string get_province()const;
};

#endif // POSTADMIN_H
