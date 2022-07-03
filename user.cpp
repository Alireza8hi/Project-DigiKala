#include <stdlib.h>
#include "Digikala.h"
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
    this->income=other.income;
    this->set_name(other.get_name());
    this->set_family(other.get_family());
    this->set_email(other.get_email());
    this->set_adress(other.get_adress());
    this->set_ncode(other.get_ncode());
    this->set_phone_number(other.get_phone_number());
    this->set_city(other.get_city());
    this->set_province(other.get_province());
    this->set_sex(other.get_sex());
    //this->comments=other.comments;
    //this->favorites=other.favorites;
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
    string current_password, new_password,renew_password;
    int pos1=1,pos2=0;
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
    ifstream input_file ("user.data",ios::binary);
    pos1=input_file.tellg();
    input_file.close();
    while(pos2<pos1)
    {
    pos2=changepass.readuser("user.data" , pos2);
    if(changepass.username==this->username)
        {
        changepass=*this;
        changepass.writeuser("user.data",(pos2-sizeof(User)));
        break;
        }
    }
    return true;
}

bool User::change_username()
{
    int pos1=1 , pos2=0;
    User changepass;
    string passwordtest,Usernametest;
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
         ifstream input_file ("user.data",ios::binary);
         pos1=input_file.tellg();
         input_file.close();
         while(pos2<pos1)
         {
             pos2=changepass.readuser("user.data",pos2);
            if(changepass.username==this->username)
            {
            this->username=Usernametest;
            changepass=*this;
            changepass.writeuser("user.data",(pos2-sizeof(User)));
            break;
            }
          }
         }
    //cout
    return true;

}

string User::get_username() const
{
    return this->username;
}

string User::get_password() const
{
    return this->password;
}

string User::get_role() const
{
    return this->role;
}

void User::set_username(const string uname)
{
    this->username=uname;
    return;
}

void User::set_password(const string upassword)
{
    this->password=upassword;
    return;
}

void User::set_role(const string urole)
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
    this->set_city(s.get_city());
    this->set_province(s.get_province());
    this->set_sex(s.get_sex());
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

int User::readuser(const char * file , int seekbeg)
{
    ifstream input_file(file,ios::binary);
    input_file.seekg(seekbeg , input_file.beg);
    input_file.read((char*)this,sizeof(User));
    int seekend=input_file.tellg();
    input_file.close();
    return seekend;
}

void User::writeuser(const char * file,int seekbeg)
{
    ofstream output_file(file,ios::binary |ios::out |ios::app );
    output_file.seekp(seekbeg);
    output_file.write((char*)this,sizeof(User));
    output_file.close();
    return;
}
