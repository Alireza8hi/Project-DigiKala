#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
    this->password="";
    this->username="";
    this->role="customer";
}

user::~user()
{
    delete ui;
}

bool user::change_password()
{
    string current_password, new_password,renew_password;
    FILE *fuser;
    user changepass;
    while(true)
    {
    cout<< "enter the current password :"<<'\n';
    cin>>current_password;
    cout<<'\n';
    cout<< "enter the new password :"<<'\n';
    cin>>new_password;
    cout<<'\n';
    cout<< "re-enter the new password :"<<'\n';
    cin>>renew_password;
    cout<<'\n';
    if(current_password != this->password)
        {
            cout<< "your current password is incorrect "<<'\n';
        }
        else
            if(new_password != renew_password)
                {
                    cout<< "you entered the password incorrectly "<<'\n';
                }
                else
                    {
                        cout<< "your password has been successfully changed "<<'\n';
                        break;
                    }
    }
    if(this->role=="customer")
                fuser=fopen("usercustomer.txt","w+");
    if(this->role=="admin")
                fuser=fopen("useradmin.txt","w+");
    if(this->role=="sellerr")
                fuser=fopen("userseller.txt","w+");
    //fread(changepass,sizeof(user),1,fuser);
                    //ادامه دارد
    return true;
}

