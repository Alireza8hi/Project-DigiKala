#include <stdlib.h>
#include "User.h"

User::User()
{
    this->password=this->username=this->role="";
    this->income=0;
}

User::User(User &other)
{
    this->username=other.username;
    this->password=other.password;
    this->role=other.role;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_adress(other.get_adress());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    //this->comments=s.comments;
    //this->favorites=s.favorites;
    return;
}

User::~User()
{
    this->password=this->username=this->role=nullptr;
    this->income=0;
    return;
}

void User::set_income(int income)
{
    this->income = income;
    return;
}

int User::get_income() const
{
    return this->income;
}

bool User::change_password()
{
    QString current_password, new_password,renew_password;
    FILE *fuser;
    User changepass;
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
    fuser=fopen("User.txt","w+");
    while(fuser!=NULL)
    {
    fread(&changepass,sizeof(User),1,fuser);
    if(changepass.username==this->username)
        {
        fseek(fuser,ftell(fuser)-sizeof(User),SEEK_CUR);
        //changepass=this;
        fwrite(&changepass,sizeof(User),1,fuser);
        break;
        }
    }
    fclose(fuser);
    return true;
}

bool User::change_username()
{
    FILE *fuser;
    User changepass;
    QString passwordtest,Usernametest;
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
         fuser=fopen("User.txt","w+");
         while(fuser!=NULL)
         {
            fread(&changepass,sizeof(User),1,fuser);
            if(changepass.username==this->username)
            {
            this->username=Usernametest;
            fseek(fuser,ftell(fuser)-sizeof(User),SEEK_CUR);
            changepass=*this;
            fwrite(&changepass,sizeof(User),1,fuser);
            break;
            }
          }
         }
    fclose(fuser);
    return true;

}

QString User::get_username() const
{
    return this->username;
}

QString User::get_password() const
{
    return this->password;
}

QString User::get_role() const
{
    return this->role;
}

void User::set_username(const QString uname)
{
    this->username=uname;
    return;
}

void User::set_password(const QString upassword)
{
    this->password=upassword;
    return;
}

void User::set_role(const QString urole)
{
    this->role=urole;
    return;
}

User& User::operator=(const User& s)
{
  this->~User();
  this->password=s.password;
  this->username=s.username;
  this->role=s.role;
  this->set_name(s.get_name());
  this->set_family(s.get_family());
  this->set_email(s.get_email());
  this->set_adress(s.get_adress());
  this->set_ncode(s.get_ncode());
  this->set_phone_number(s.get_phone_number());
  //this->comments=s.comments;
  //this->favorites=s.favorites;
    return *this;
}

void User::push_front_comments(const Comment& comment)
{
    //this->comments.push_front(comment);
    return;
}

void User::push_front_favorites(const Commodity commodity)
{
    //this->favorites.push_front(commodity);
    return;
}

Comment User::get_comment(int index)
{
    return this->comments.at(index);
}

Commodity User::get_commodity(int index)
{
    return this->favorites.at(index);
}

void User::readuser(FILE *fuser)
{
    fread(this,sizeof(User),1,fuser);
    return;
}

void User::writeuser(FILE *fuser)
{
    fwrite(this,sizeof(User),1,fuser);
    return;
}
