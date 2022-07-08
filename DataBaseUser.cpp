/*#include "DataBaseUser.h"
#include "Digikala.h"

DataBaseUser data_base_user[1000];

DataBaseUser::DataBaseUser()
{
    is_null = true;
    return;
}

DataBaseUser::~DataBaseUser()
{
    return;
}

int DataBaseUser::readuser(const char * file , int seekbeg )
{
    ifstream input_file(file,ios::binary |ios::app);
    input_file.seekg(seekbeg , input_file.beg);
    input_file.read((char*)this,sizeof(DataBaseUser[1000]));
    int seekend=input_file.tellg();
    input_file.close();
    if(is_null==false)
    {
    site->read_digi_kala("DataBase2.data",0);
    //pull_data();
    }
    return seekend;
}

void DataBaseUser::writeuser(const char * file,int seekbeg)
{
    ofstream output_file(file,ios::binary |ios::out |ios::app );
    output_file.seekp(seekbeg);
    output_file.write((char*)this,sizeof(DataBaseUser[1000]));
    output_file.close();
    return;
}*/
/*
void push_data()
{
    data_base_user[0].is_null = false;
    int num_user = 0;
    data_base_user[num_user].username = site->get_main_admin()->get_username();
    data_base_user[num_user].password  = site->get_main_admin()->get_password();
    data_base_user[num_user].role  = site->get_main_admin()->get_role();
    data_base_user[num_user].income  = site->get_main_admin()->get_income();
    //data_base_user[num_user].comments  = site->get_main_admin()
    //data_base_user[num_user].favorites  = site->get_main_admin()
    //data_base_user[num_user].buy_list  = site->get_main_admin()
    data_base_user[num_user].name   = site->get_main_admin()->get_name();
    data_base_user[num_user].family  = site->get_main_admin()->get_family();
    data_base_user[num_user].national_code  = site->get_main_admin()->get_ncode();
    data_base_user[num_user].email  = site->get_main_admin()->get_email();
    data_base_user[num_user].address  = site->get_main_admin()->get_address();
    data_base_user[num_user].phone_number  = site->get_main_admin()->get_phone_number();
    data_base_user[num_user].city  = site->get_main_admin()->get_city();
    data_base_user[num_user].province  = site->get_main_admin()->get_province();
    data_base_user[num_user].sex  = site->get_main_admin()->get_sex();
    num_user++;
    data_base_user[num_user].username  = site->get_review_admin()->get_username();
    data_base_user[num_user].password  = site->get_review_admin()->get_password();
    data_base_user[num_user].role  = site->get_review_admin()->get_role();
    data_base_user[num_user].income  = site->get_review_admin()->get_income();
    //data_base_user[num_user].comments  = site->get_review_admin()
    //data_base_user[num_user].favorites  = site->get_review_admin()
    //data_base_user[num_user].buy_list  = site->get_review_admin()
    data_base_user[num_user].name   = site->get_review_admin()->get_name();
    data_base_user[num_user].family  = site->get_review_admin()->get_family();
    data_base_user[num_user].national_code  = site->get_review_admin()->get_ncode();
    data_base_user[num_user].email  = site->get_review_admin()->get_email();
    data_base_user[num_user].address  = site->get_review_admin()->get_address();
    data_base_user[num_user].phone_number  = site->get_review_admin()->get_phone_number();
    data_base_user[num_user].city  = site->get_review_admin()->get_city();
    data_base_user[num_user].province  = site->get_review_admin()->get_province();
    data_base_user[num_user].sex  = site->get_review_admin()->get_sex();
    num_user++;
    for(int counter = 0;counter<31;counter++)
    {
        data_base_user[num_user].username  = site->get_post_admin(counter)->get_username();
        data_base_user[num_user].password  = site->get_post_admin(counter)->get_password();
        data_base_user[num_user].role  = site->get_post_admin(counter)->get_role();
        data_base_user[num_user].income  = site->get_post_admin(counter)->get_income();
        //data_base_user[num_user].comments  = site->get_post_admin(counter)
        //data_base_user[num_user].favorites  = site->get_post_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_post_admin(counter)
        data_base_user[num_user].name   = site->get_post_admin(counter)->get_name();
        data_base_user[num_user].family  = site->get_post_admin(counter)->get_family();
        data_base_user[num_user].national_code  = site->get_post_admin(counter)->get_ncode();
        data_base_user[num_user].email  = site->get_post_admin(counter)->get_email();
        data_base_user[num_user].address  = site->get_post_admin(counter)->get_address();
        data_base_user[num_user].phone_number  = site->get_post_admin(counter)->get_phone_number();
        data_base_user[num_user].city  = site->get_post_admin(counter)->get_city();
        data_base_user[num_user].province  = site->get_post_admin(counter)->get_province();
        data_base_user[num_user].sex  = site->get_post_admin(counter)->get_sex();
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_support_admin();counter++)
    {
        data_base_user[num_user].username  = site->get_support_admin(counter)->get_username();
        data_base_user[num_user].password  = site->get_support_admin(counter)->get_password();
        data_base_user[num_user].role  = site->get_support_admin(counter)->get_role();
        data_base_user[num_user].income  = site->get_support_admin(counter)->get_income();
        //data_base_user[num_user].comments  = site->get_support_admin(counter)
        //data_base_user[num_user].favorites  = site->get_support_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_support_admin(counter)
        data_base_user[num_user].name   = site->get_support_admin(counter)->get_name();
        data_base_user[num_user].family  = site->get_support_admin(counter)->get_family();
        data_base_user[num_user].national_code  = site->get_support_admin(counter)->get_ncode();
        data_base_user[num_user].email  = site->get_support_admin(counter)->get_email();
        data_base_user[num_user].address  = site->get_support_admin(counter)->get_address();
        data_base_user[num_user].phone_number  = site->get_support_admin(counter)->get_phone_number();
        data_base_user[num_user].city  = site->get_support_admin(counter)->get_city();
        data_base_user[num_user].province  = site->get_support_admin(counter)->get_province();
        data_base_user[num_user].sex  = site->get_support_admin(counter)->get_sex();
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_store_admin();counter++)
    {
        data_base_user[num_user].username  = site->get_store_admin(counter)->get_username();
        data_base_user[num_user].password  = site->get_store_admin(counter)->get_password();
        data_base_user[num_user].role  = site->get_store_admin(counter)->get_role();
        data_base_user[num_user].income  = site->get_store_admin(counter)->get_income();
        //data_base_user[num_user].comments  = site->get_store_admin(counter)
        //data_base_user[num_user].favorites  = site->get_store_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_store_admin(counter)
        data_base_user[num_user].name   = site->get_store_admin(counter)->get_name();
        data_base_user[num_user].family  = site->get_store_admin(counter)->get_family();
        data_base_user[num_user].national_code  = site->get_store_admin(counter)->get_ncode();
        data_base_user[num_user].email  = site->get_store_admin(counter)->get_email();
        data_base_user[num_user].address  = site->get_store_admin(counter)->get_address();
        data_base_user[num_user].phone_number  = site->get_store_admin(counter)->get_phone_number();
        data_base_user[num_user].city  = site->get_store_admin(counter)->get_city();
        data_base_user[num_user].province  = site->get_store_admin(counter)->get_province();
        data_base_user[num_user].sex  = site->get_store_admin(counter)->get_sex();
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_seller();counter++)
    {
        data_base_user[num_user].username  = site->get_seller(counter)->get_username();
        data_base_user[num_user].password  = site->get_seller(counter)->get_password();
        data_base_user[num_user].role  = site->get_seller(counter)->get_role();
        data_base_user[num_user].income  = site->get_seller(counter)->get_income();
        //data_base_user[num_user].comments  = site->get_seller(counter)
        //data_base_user[num_user].favorites  = site->get_seller(counter)
        //data_base_user[num_user].buy_list  = site->get_seller(counter)
        data_base_user[num_user].name   = site->get_seller(counter)->get_name();
        data_base_user[num_user].family  = site->get_seller(counter)->get_family();
        data_base_user[num_user].national_code  = site->get_seller(counter)->get_ncode();
        data_base_user[num_user].email  = site->get_seller(counter)->get_email();
        data_base_user[num_user].address  = site->get_seller(counter)->get_address();
        data_base_user[num_user].phone_number  = site->get_seller(counter)->get_phone_number();
        data_base_user[num_user].city  = site->get_seller(counter)->get_city();
        data_base_user[num_user].province  = site->get_seller(counter)->get_province();
        data_base_user[num_user].sex  = site->get_seller(counter)->get_sex();
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_customer();counter++)
    {
        data_base_user[num_user].username  = site->get_customer(counter)->get_username();
        data_base_user[num_user].password  = site->get_customer(counter)->get_password();
        data_base_user[num_user].role  = site->get_customer(counter)->get_role();
        data_base_user[num_user].income  = site->get_customer(counter)->get_income();
        //data_base_user[num_user].comments  = site->get_customer(counter)
        //data_base_user[num_user].favorites  = site->get_customer(counter)
        //data_base_user[num_user].buy_list  = site->get_customer(counter)
        data_base_user[num_user].name   = site->get_customer(counter)->get_name();
        data_base_user[num_user].family  = site->get_customer(counter)->get_family();
        data_base_user[num_user].national_code  = site->get_customer(counter)->get_ncode();
        data_base_user[num_user].email  = site->get_customer(counter)->get_email();
        data_base_user[num_user].address  = site->get_customer(counter)->get_address();
        data_base_user[num_user].phone_number  = site->get_customer(counter)->get_phone_number();
        data_base_user[num_user].city  = site->get_customer(counter)->get_city();
        data_base_user[num_user].province  = site->get_customer(counter)->get_province();
        data_base_user[num_user].sex  = site->get_customer(counter)->get_sex();
        num_user++;
    }
    return;
}
void pull_data()
{
    int num_user = 0;
    site->get_main_admin()->set_username(data_base_user[num_user].username);
    site->get_main_admin()->set_password(data_base_user[num_user].password);
    site->get_main_admin()->set_role(data_base_user[num_user].role);
    site->get_main_admin()->set_income(data_base_user[num_user].income);
    //data_base_user[num_user].comments  = site->get_main_admin()
    //data_base_user[num_user].favorites  = site->get_main_admin()
    //data_base_user[num_user].buy_list  = site->get_main_admin()
    site->get_main_admin()->set_name(data_base_user[num_user].name);
    site->get_main_admin()->set_family(data_base_user[num_user].family);
    site->get_main_admin()->set_ncode(data_base_user[num_user].national_code);
    site->get_main_admin()->set_email(data_base_user[num_user].email);
    site->get_main_admin()->set_address(data_base_user[num_user].address);
    site->get_main_admin()->set_phone_number(data_base_user[num_user].phone_number);
    site->get_main_admin()->set_city(data_base_user[num_user].city);
    site->get_main_admin()->set_province(data_base_user[num_user].province);
    site->get_main_admin()->set_sex(data_base_user[num_user].sex);
    num_user++;
    site->get_review_admin()->set_username(data_base_user[num_user].username);
    site->get_review_admin()->set_password(data_base_user[num_user].password);
    site->get_review_admin()->set_role(data_base_user[num_user].role);
    site->get_review_admin()->set_income(data_base_user[num_user].income);
    //data_base_user[num_user].comments  = site->get_review_admin()
    //data_base_user[num_user].favorites  = site->get_review_admin()
    //data_base_user[num_user].buy_list  = site->get_review_admin()
    site->get_review_admin()->set_name(data_base_user[num_user].name);
    site->get_review_admin()->set_family(data_base_user[num_user].family);
    site->get_review_admin()->set_ncode(data_base_user[num_user].national_code);
    site->get_review_admin()->set_email(data_base_user[num_user].email);
    site->get_review_admin()->set_address(data_base_user[num_user].address);
    site->get_review_admin()->set_phone_number(data_base_user[num_user].phone_number);
    site->get_review_admin()->set_city(data_base_user[num_user].city);
    site->get_review_admin()->set_province(data_base_user[num_user].province);
    site->get_review_admin()->set_sex(data_base_user[num_user].sex);
    num_user++;
    for(int counter = 0;counter<31;counter++)
    {
        site->get_post_admin(counter)->set_username(data_base_user[num_user].username);
        site->get_post_admin(counter)->set_password(data_base_user[num_user].password);
        site->get_post_admin(counter)->set_role(data_base_user[num_user].role);
        site->get_post_admin(counter)->set_income(data_base_user[num_user].income);
        //data_base_user[num_user].comments  = site->get_post_admin(counter)
        //data_base_user[num_user].favorites  = site->get_post_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_post_admin(counter)
        site->get_post_admin(counter)->set_name(data_base_user[num_user].name);
        site->get_post_admin(counter)->set_family(data_base_user[num_user].family);
        site->get_post_admin(counter)->set_ncode(data_base_user[num_user].national_code);
        site->get_post_admin(counter)->set_email(data_base_user[num_user].email);
        site->get_post_admin(counter)->set_address(data_base_user[num_user].address);
        site->get_post_admin(counter)->set_phone_number(data_base_user[num_user].phone_number);
        site->get_post_admin(counter)->set_city(data_base_user[num_user].city);
        site->get_post_admin(counter)->set_province(data_base_user[num_user].province);
        site->get_post_admin(counter)->set_sex(data_base_user[num_user].sex);
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_support_admin();counter++)
    {
        site->get_support_admin(counter)->set_username(data_base_user[num_user].username);
        site->get_support_admin(counter)->set_password(data_base_user[num_user].password);
        site->get_support_admin(counter)->set_role(data_base_user[num_user].role);
        site->get_support_admin(counter)->set_income(data_base_user[num_user].income);
        //data_base_user[num_user].comments  = site->get_support_admin(counter)
        //data_base_user[num_user].favorites  = site->get_support_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_support_admin(counter)
        site->get_support_admin(counter)->set_name(data_base_user[num_user].name);
        site->get_support_admin(counter)->set_family(data_base_user[num_user].family);
        site->get_support_admin(counter)->set_ncode(data_base_user[num_user].national_code);
        site->get_support_admin(counter)->set_email(data_base_user[num_user].email);
        site->get_support_admin(counter)->set_address(data_base_user[num_user].address);
        site->get_support_admin(counter)->set_phone_number(data_base_user[num_user].phone_number);
        site->get_support_admin(counter)->set_city(data_base_user[num_user].city);
        site->get_support_admin(counter)->set_province(data_base_user[num_user].province);
        site->get_support_admin(counter)->set_sex(data_base_user[num_user].sex);
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_store_admin();counter++)
    {
        site->get_store_admin(counter)->set_username(data_base_user[num_user].username);
        site->get_store_admin(counter)->set_password(data_base_user[num_user].password);
        site->get_store_admin(counter)->set_role(data_base_user[num_user].role);
        site->get_store_admin(counter)->set_income(data_base_user[num_user].income);
        //data_base_user[num_user].comments  = site->get_store_admin(counter)
        //data_base_user[num_user].favorites  = site->get_store_admin(counter)
        //data_base_user[num_user].buy_list  = site->get_store_admin(counter)
        site->get_store_admin(counter)->set_name(data_base_user[num_user].name);
        site->get_store_admin(counter)->set_family(data_base_user[num_user].family);
        site->get_store_admin(counter)->set_ncode(data_base_user[num_user].national_code);
        site->get_store_admin(counter)->set_email(data_base_user[num_user].email);
        site->get_store_admin(counter)->set_address(data_base_user[num_user].address);
        site->get_store_admin(counter)->set_phone_number(data_base_user[num_user].phone_number);
        site->get_store_admin(counter)->set_city(data_base_user[num_user].city);
        site->get_store_admin(counter)->set_province(data_base_user[num_user].province);
        site->get_store_admin(counter)->set_sex(data_base_user[num_user].sex);
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_seller();counter++)
    {
        site->get_seller(counter)->set_username(data_base_user[num_user].username);
        site->get_seller(counter)->set_password(data_base_user[num_user].password);
        site->get_seller(counter)->set_role(data_base_user[num_user].role);
        site->get_seller(counter)->set_income(data_base_user[num_user].income);
        //data_base_user[num_user].comments  = site->get_seller(counter)
        //data_base_user[num_user].favorites  = site->get_seller(counter)
        //data_base_user[num_user].buy_list  = site->get_seller(counter)
        site->get_seller(counter)->set_name(data_base_user[num_user].name);
        site->get_seller(counter)->set_family(data_base_user[num_user].family);
        site->get_seller(counter)->set_ncode(data_base_user[num_user].national_code);
        site->get_seller(counter)->set_email(data_base_user[num_user].email);
        site->get_seller(counter)->set_address(data_base_user[num_user].address);
        site->get_seller(counter)->set_phone_number(data_base_user[num_user].phone_number);
        site->get_seller(counter)->set_city(data_base_user[num_user].city);
        site->get_seller(counter)->set_province(data_base_user[num_user].province);
        site->get_seller(counter)->set_sex(data_base_user[num_user].sex);
        num_user++;
    }
    for(int counter = 0;counter<site->get_num_of_customer();counter++)
    {
        site->get_customer(counter)->set_username(data_base_user[num_user].username);
        site->get_customer(counter)->set_password(data_base_user[num_user].password);
        site->get_customer(counter)->set_role(data_base_user[num_user].role);
        site->get_customer(counter)->set_income(data_base_user[num_user].income);
        //data_base_user[num_user].comments  = site->get_customer(counter)
        //data_base_user[num_user].favorites  = site->get_customer(counter)
        //data_base_user[num_user].buy_list  = site->get_customer(counter)
        site->get_customer(counter)->set_name(data_base_user[num_user].name);
        site->get_customer(counter)->set_family(data_base_user[num_user].family);
        site->get_customer(counter)->set_ncode(data_base_user[num_user].national_code);
        site->get_customer(counter)->set_email(data_base_user[num_user].email);
        site->get_customer(counter)->set_address(data_base_user[num_user].address);
        site->get_customer(counter)->set_phone_number(data_base_user[num_user].phone_number);
        site->get_customer(counter)->set_city(data_base_user[num_user].city);
        site->get_customer(counter)->set_province(data_base_user[num_user].province);
        site->get_customer(counter)->set_sex(data_base_user[num_user].sex);
        num_user++;
    }
    return;
}

void DataBaseUser::save_data()
{
    site->write_digi_kala("DataBase2.data",0);
    return;
}*/
