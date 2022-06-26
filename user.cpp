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
    QString current_password, new_password,renew_password;
    FILE *fuser;
    user changepass;
    while(true)
    {
    cout<< "enter the current password :"<<'\n';
    //cin>>current_password;
    cout<<'\n';
    cout<< "enter the new password :"<<'\n';
    //cin>>new_password;
    cout<<'\n';
    cout<< "re-enter the new password :"<<'\n';
    //cin>>renew_password;
    cout<<'\n';
    if(current_password != this->password)
        {
            cout<< "your current password is incorrect "<<'\n';
            return false;
        }
        else
            if(new_password != renew_password)
                {
                    cout<< "you entered the password incorrectly "<<'\n';
                    return false;
                }
                else
                    {
                        cout<< "your password has been successfully changed "<<'\n';
                        break;
                    }
    }
    this->password=new_password;
    fuser=fopen("user.txt","w+");
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
    fclose(fuser);
    return true;
}

bool user::change_username()
{
    FILE *fuser;
    user changepass;
    QString passwordtest,usernametest;
    cout<< "enter the new username :"<<'\n';
    //cin>>usernametest;
    cout<<'\n';
    cout<< "Enter the password :"<<'\n';
    //cin>>passwordtest;
    cout<<'\n';
    if(this->password!=passwordtest)
    {
       cout<< "your password is incorrect "<<'\n';
       return false;
    }
        else
        {
         fuser=fopen("user.txt","w+");
         while(fuser!=NULL)
         {
            fread(&changepass,sizeof(user),1,fuser);
            if(changepass.username==this->username)
            {
            this->username=usernametest;
            fseek(fuser,ftell(fuser)-sizeof(user),SEEK_CUR);
            changepass=this;
            fwrite(&changepass,sizeof(user),1,fuser);
            break;
            }
          }
         }
    fclose(fuser);
    return true;

}

QString user::get_username()
{
    return this->username;
}

QString user::get_password()
{
    return this->password;
}

QString user::get_role()
{
    return this->role;
}

user& user::operator=(const user& s)
{
  this->~user();
  this->password=s.password;
  this->username=s.username;
  this->role=s.role;
  this->set_name(s.get_name());
  this->set_family(s.get_family());
  this->set_email(s.get_email());
  this->set_adress(s.get_adress());
  this->set_ncode(s.get_ncode());
  this->set_phone_number(s.get_phone_number());
  return *this;
}

