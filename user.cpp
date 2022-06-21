#include <stdlib.h>
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
    this->password=new_password;
    if(this->role=="customer")
                fuser=fopen("usercustomer.bin","w+");
    if(this->role=="admin")
                fuser=fopen("useradmin.bin","w+");
    if(this->role=="sellerr")
                fuser=fopen("userseller.bin","w+");
    while(fuser!=NULL)
    {
    fread(&changepass,sizeof(user),1,fuser);
    if(changepass.username==this->username)
        {
        fseek(fuser,ftell(fuser)-sizeof(user),SEEK_CUR);
        changepass=this;
        fwrite(&changepass,sizeof(user),1,fuser);
        break;
        }
    }
                    //ادامه دارد
    return true;
}

user& user::operator=(const user& s)
{
  this->~user();
  this->password=s.password;
  this->username=s.username;
  this->role=s.role;
  //ادامه دارد
  return *this;
}

