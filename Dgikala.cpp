#include "Digikala.h"

DigiKala::DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_sell_sold_commonities = this->num_of_customer = this->num_of_seller = 0;
    this->num_of_admins = 38;
    this->money = 10000000;
    this->num_of_store_admin = 3;
    this->num_of_support_admin =2;
    main_admin = new MainAdmin;
    main_admin->set_name("main_admin");
    main_admin->set_family("main_admin");
    main_admin->set_username("main_admin");
    main_admin->set_adress("-");
    main_admin->set_email("-");
    main_admin->set_sex(0);
    main_admin->set_ncode("-");
    main_admin->set_income(2000);
    main_admin->set_city("-");
    main_admin->set_province("-");
    main_admin->set_role("main_admin");
    main_admin->set_phone_number("-");
    main_admin->set_password("main_admin");
    review_admin = new ReviewAdmin;
    review_admin->set_name("review_admin");
    review_admin->set_family("review_admin");
    review_admin->set_username("review_admin");
    review_admin->set_adress("-");
    review_admin->set_email("-");
    review_admin->set_sex(0);
    review_admin->set_ncode("-");
    review_admin->set_role("review_admin");
    review_admin->set_phone_number("-");
    review_admin->set_password("review_admin");
    review_admin->set_income(1000);
    review_admin->set_city("-");
    review_admin->set_province("-");
    post_admins = new PostAdmin[31];
    for(int counter = 0;counter<31;counter++)
    {
        post_admins[counter].set_adress("-");
        post_admins[counter].set_email("-");
        post_admins[counter].set_sex(0);
        post_admins[counter].set_ncode("-");
        post_admins[counter].set_phone_number("-");
        post_admins[counter].set_income(800);
        post_admins[counter].set_city("-");
    }
    post_admins[0].set_name("post_admin1");
    post_admins[0].set_family("post_admin1");
    post_admins[0].set_username("post_admin1");
    post_admins[0].set_role("post_admin1");
    post_admins[0].set_password("post_admin1");
    post_admins[0].set_province("Tehran");
    post_admins[1].set_name("post_admin2");
    post_admins[1].set_family("post_admin2");
    post_admins[1].set_username("post_admin2");
    post_admins[1].set_role("post_admin2");
    post_admins[1].set_password("post_admin2");
    post_admins[1].set_province("Esfahan");
    post_admins[2].set_name("post_admin3");
    post_admins[2].set_family("post_admin3");
    post_admins[2].set_username("post_admin3");
    post_admins[2].set_role("post_admin3");
    post_admins[2].set_password("post_admin3");
    post_admins[2].set_province("Qom");
    post_admins[3].set_name("post_admin4");
    post_admins[3].set_family("post_admin4");
    post_admins[3].set_username("post_admin4");
    post_admins[3].set_role("post_admin4");
    post_admins[3].set_password("post_admin4");
    post_admins[3].set_province("West Azarbaijan");
    post_admins[4].set_name("post_admin5");
    post_admins[4].set_family("post_admin5");
    post_admins[4].set_username("post_admin5");
    post_admins[4].set_role("post_admin5");
    post_admins[4].set_password("post_admin5");
    post_admins[4].set_province("East Azarbaijan");
    post_admins[5].set_name("post_admin6");
    post_admins[5].set_family("post_admin6");
    post_admins[5].set_username("post_admin6");
    post_admins[5].set_role("post_admin6");
    post_admins[5].set_password("post_admin6");
    post_admins[5].set_province("Ardabil");
    post_admins[6].set_name("post_admin7");
    post_admins[6].set_family("post_admin7");
    post_admins[6].set_username("post_admin7");
    post_admins[6].set_role("post_admin7");
    post_admins[6].set_password("post_admin7");
    post_admins[6].set_province("Gilan");
    post_admins[7].set_name("post_admin8");
    post_admins[7].set_family("post_admin8");
    post_admins[7].set_username("post_admin8");
    post_admins[7].set_role("post_admin8");
    post_admins[7].set_password("post_admin8");
    post_admins[7].set_province("Zanjan");
    post_admins[8].set_name("post_admin9");
    post_admins[8].set_family("post_admin9");
    post_admins[8].set_username("post_admin9");
    post_admins[8].set_role("post_admin9");
    post_admins[8].set_password("post_admin9");
    post_admins[8].set_province("Kurdistan");
    post_admins[9].set_name("post_admin10");
    post_admins[9].set_family("post_admin10");
    post_admins[9].set_username("post_admin10");
    post_admins[9].set_role("post_admin10");
    post_admins[9].set_password("post_admin10");
    post_admins[9].set_province("Kermanshah");
    post_admins[10].set_name("post_admin11");
    post_admins[10].set_family("post_admin11");
    post_admins[10].set_username("post_admin11");
    post_admins[10].set_role("post_admin11");
    post_admins[10].set_password("post_admin11");
    post_admins[10].set_province("Hamadan");
    post_admins[11].set_name("post_admin12");
    post_admins[11].set_family("post_admin12");
    post_admins[11].set_username("post_admin12");
    post_admins[11].set_role("post_admin12");
    post_admins[11].set_password("post_admin12");
    post_admins[11].set_province("Qazvin");
    post_admins[12].set_name("post_admin13");
    post_admins[12].set_family("post_admin13");
    post_admins[12].set_username("post_admin13");
    post_admins[12].set_role("post_admin13");
    post_admins[12].set_password("post_admin13");
    post_admins[12].set_province("Alborz");
    post_admins[13].set_name("post_admin14");
    post_admins[13].set_family("post_admin14");
    post_admins[13].set_username("post_admin14");
    post_admins[13].set_role("post_admin14");
    post_admins[13].set_password("post_admin14");
    post_admins[13].set_province("Mazandaran");
    post_admins[14].set_name("post_admin15");
    post_admins[14].set_family("post_admin15");
    post_admins[14].set_username("post_admin15");
    post_admins[14].set_role("post_admin15");
    post_admins[14].set_password("post_admin15");
    post_admins[14].set_province("Markazi");
    post_admins[15].set_name("post_admin16");
    post_admins[15].set_family("post_admin16");
    post_admins[15].set_username("post_admin16");
    post_admins[15].set_role("post_admin16");
    post_admins[15].set_password("post_admin16");
    post_admins[15].set_province("Ilam");
    post_admins[16].set_name("post_admin17");
    post_admins[16].set_family("post_admin17");
    post_admins[16].set_username("post_admin17");
    post_admins[16].set_role("post_admin17");
    post_admins[16].set_password("post_admin17");
    post_admins[16].set_province("Lorestan");
    post_admins[17].set_name("post_admin18");
    post_admins[17].set_family("post_admin18");
    post_admins[17].set_username("post_admin18");
    post_admins[17].set_role("post_admin18");
    post_admins[17].set_password("post_admin18");
    post_admins[17].set_province("Golestan");
    post_admins[18].set_name("post_admin19");
    post_admins[18].set_family("post_admin19");
    post_admins[18].set_username("post_admin19");
    post_admins[18].set_role("post_admin19");
    post_admins[18].set_password("post_admin19");
    post_admins[18].set_province("Khuzestan");
    post_admins[19].set_name("post_admin20");
    post_admins[19].set_family("post_admin20");
    post_admins[19].set_username("post_admin20");
    post_admins[19].set_role("post_admin20");
    post_admins[19].set_password("post_admin20");
    post_admins[19].set_province("Chaharmahal and Bakhtiari");
    post_admins[20].set_name("post_admin21");
    post_admins[20].set_family("post_admin21");
    post_admins[20].set_username("post_admin21");
    post_admins[20].set_role("post_admin21");
    post_admins[20].set_password("post_admin21");
    post_admins[20].set_province("Semnan");
    post_admins[21].set_name("post_admin22");
    post_admins[21].set_family("post_admin22");
    post_admins[21].set_username("post_admin22");
    post_admins[21].set_role("post_admin22");
    post_admins[21].set_password("post_admin22");
    post_admins[21].set_province("North Khorasan");
    post_admins[22].set_name("post_admin23");
    post_admins[22].set_family("post_admin23");
    post_admins[22].set_username("post_admin23");
    post_admins[22].set_role("post_admin23");
    post_admins[22].set_password("post_admin23");
    post_admins[22].set_province("Razavi Khorasan");
    post_admins[23].set_name("post_admin24");
    post_admins[23].set_family("post_admin24");
    post_admins[23].set_username("post_admin24");
    post_admins[23].set_role("post_admin24");
    post_admins[23].set_password("post_admin24");
    post_admins[23].set_province("South Khorasan");
    post_admins[24].set_name("post_admin25");
    post_admins[24].set_family("post_admin25");
    post_admins[24].set_username("post_admin25");
    post_admins[24].set_role("post_admin25");
    post_admins[24].set_password("post_admin25");
    post_admins[24].set_province("Yazd");
    post_admins[25].set_name("post_admin26");
    post_admins[25].set_family("post_admin26");
    post_admins[25].set_username("post_admin26");
    post_admins[25].set_role("post_admin26");
    post_admins[25].set_password("post_admin26");
    post_admins[25].set_province("Kohgiluyeh and Boyer-ahmad");
    post_admins[26].set_name("post_admin27");
    post_admins[26].set_family("post_admin27");
    post_admins[26].set_username("post_admin27");
    post_admins[26].set_role("post_admin27");
    post_admins[26].set_password("post_admin27");
    post_admins[26].set_province("Fars");
    post_admins[27].set_name("post_admin28");
    post_admins[27].set_family("post_admin28");
    post_admins[27].set_username("post_admin28");
    post_admins[27].set_role("post_admin28");
    post_admins[27].set_password("post_admin28");
    post_admins[27].set_province("Kerman");
    post_admins[28].set_name("post_admin29");
    post_admins[28].set_family("post_admin29");
    post_admins[28].set_username("post_admin29");
    post_admins[28].set_role("post_admin29");
    post_admins[28].set_password("post_admin29");
    post_admins[28].set_province("Bushehr");
    post_admins[29].set_name("post_admin30");
    post_admins[29].set_family("post_admin30");
    post_admins[29].set_username("post_admin30");
    post_admins[29].set_role("post_admin30");
    post_admins[29].set_password("post_admin30");
    post_admins[29].set_province("Hormozgan");
    post_admins[30].set_name("post_admin31");
    post_admins[30].set_family("post_admin31");
    post_admins[30].set_username("post_admin31");
    post_admins[30].set_role("post_admin31");
    post_admins[30].set_password("post_admin31");
    post_admins[30].set_province("Sistan and Baluchestan");
    store_admins.resize(3);
    for(size_t counter = 0;counter<store_admins.size();counter++)
    {
        store_admins[counter] = new StoreAdmin;
    }
    for(size_t counter = 0;counter<store_admins.size();counter++)
    {
        store_admins[counter]->set_adress("-");
        store_admins[counter]->set_email("-");
        store_admins[counter]->set_sex(0);
        store_admins[counter]->set_ncode("-");
        store_admins[counter]->set_phone_number("-");
        store_admins[counter]->set_income(1500);
        store_admins[counter]->set_city("-");
        store_admins[counter]->set_province("-");
    }
    store_admins[0]->set_name("store_admin1");
    store_admins[0]->set_family("store_admin1");
    store_admins[0]->set_username("store_admin1");
    store_admins[0]->set_role("store_admin1");
    store_admins[0]->set_password("store_admin1");
    store_admins[1]->set_name("store_admin2");
    store_admins[1]->set_family("store_admin2");
    store_admins[1]->set_username("store_admin2");
    store_admins[1]->set_role("store_admin2");
    store_admins[1]->set_password("store_admin2");
    store_admins[2]->set_name("store_admin3");
    store_admins[2]->set_family("store_admin3");
    store_admins[2]->set_username("store_admin3");
    store_admins[2]->set_role("store_admin3");
    store_admins[2]->set_password("store_admin3");
    support_admins.resize(2);
    for(size_t counter = 0;counter<support_admins.size();counter++)
    {
        support_admins[counter] = new SupportAdmin;
    }
    for(size_t counter = 0;counter<support_admins.size();counter++)
    {
        support_admins[counter]->set_adress("-");
        support_admins[counter]->set_email("-");
        support_admins[counter]->set_sex(0);
        support_admins[counter]->set_ncode("-");
        support_admins[counter]->set_phone_number("-");
        support_admins[counter]->set_income(1200);
        support_admins[counter]->set_city("-");
        support_admins[counter]->set_province("-");
    }
    support_admins[0]->set_name("support_admin1");
    support_admins[0]->set_family("support_admin1");
    support_admins[0]->set_username("support_admin1");
    support_admins[0]->set_role("support_admin1");
    support_admins[0]->set_password("support_admin1");
    support_admins[1]->set_name("support_admin2");
    support_admins[1]->set_family("support_admin2");
    support_admins[1]->set_username("support_admin2");
    support_admins[1]->set_role("support_admin2");
    support_admins[1]->set_password("support_admin2");
    return;
}

DigiKala& DigiKala::make_object()
{
    static DigiKala digi_kala;
    return digi_kala;
}

DigiKala::~DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_admins = this->num_of_sell_sold_commonities = this->money = this->num_of_seller = this->num_of_customer = this->num_of_store_admin = this->num_of_support_admin =0;
    return;
}

void DigiKala::set_num_of_seller(int num_of_seller)
{
    this->num_of_seller = num_of_seller;
    return;
}

int DigiKala::get_num_of_seller() const
{
    return this->num_of_seller;
}

void DigiKala::set_num_of_customer(int num_of_customer)
{
    this->num_of_customer = num_of_customer;
    return;
}

int DigiKala::get_num_of_customer() const
{
    return this->num_of_customer;
}

void DigiKala::set_num_of_support_admin(int num_of_support_admin)
{
    this->num_of_support_admin = num_of_support_admin;
    return;
}

int DigiKala::get_num_of_support_admin() const
{
    return this->num_of_support_admin;
}

void DigiKala::set_num_of_store_admin(int num_of_store_admin)
{
    this->num_of_store_admin = num_of_store_admin;
    return;
}

int DigiKala::get_num_of_store_admin() const
{
    return this->num_of_store_admin;
}

void DigiKala::set_num_of_commodities(int num_of_commodities)
{
    this->num_of_commodities = num_of_commodities;
    return;
}

int DigiKala::get_num_of_commodities() const
{
    return this->num_of_commodities;
}

void DigiKala::set_num_of_sell_sold_commonities(int num_of_sell_sold_commonities)
{
    this->num_of_sell_sold_commonities = num_of_sell_sold_commonities;
    return;
}

int DigiKala::get_num_of_sell_sold_commonities() const
{
    return this->num_of_sell_sold_commonities;
}

void DigiKala::set_num_of_admins(int num_of_admins)
{
    this->num_of_admins = num_of_admins;
    return;
}

int DigiKala::get_num_of_admins() const
{
    return this->num_of_admins;
}

void DigiKala::set_income(int income)
{
    this->income = income;
    return;
}

int DigiKala::get_income() const
{
    return this->income;
}

void DigiKala::set_money(int money)
{
    this->money = money;
    return;
}

int DigiKala::get_money() const
{
    return this->money;
}

User* DigiKala::get_main_admin()
{
    return this->main_admin;
}

User* DigiKala::get_review_admin()
{
    return this->review_admin;
}

User DigiKala::get_post_admin(int number)
{
    return this->post_admins[number];
}

User* DigiKala::get_support_admin(int number)
{
    return this->support_admins[number];
}

User *DigiKala::get_store_admin(int number)
{
    return this->store_admins[number];
}

User *DigiKala::get_customer(int number)
{
    return this->customers[number];
}

User *DigiKala::get_seller(int number)
{
    return this->sellers[number];
}

void DigiKala::add_customer(QString name, QString family, QString username, QString password, QString address, QString city, QString province, QString national_code, QString phone_number, QString email, int sex)
{
    int numberc = this->num_of_customer;
    this->customers.resize(numberc+1);
    this->customers[this->num_of_customer] = new Customer;
    this->customers[this->num_of_customer]->set_role("customer");
    this->customers[this->num_of_customer]->set_income(0);
    this->customers[this->num_of_customer]->set_name(name);
    this->customers[this->num_of_customer]->set_family(family);
    this->customers[this->num_of_customer]->set_username(username);
    this->customers[this->num_of_customer]->set_password(password);
    this->customers[this->num_of_customer]->set_adress(address);
    this->customers[this->num_of_customer]->set_city(city);
    this->customers[this->num_of_customer]->set_province(province);
    this->customers[this->num_of_customer]->set_ncode(national_code);
    this->customers[this->num_of_customer]->set_phone_number(phone_number);
    this->customers[this->num_of_customer]->set_email(email);
    this->customers[this->num_of_customer]->set_sex(sex);
    this->set_num_of_customer(numberc+1);
    return;
}

void DigiKala::add_seller(QString name, QString family, QString username, QString password, QString address, QString city, QString province, QString national_code, QString phone_number, QString email, int sex)
{
    int numbers = this->num_of_seller;
    this->sellers.resize(numbers+1);
    this->sellers[this->num_of_seller] = new Seller;
    this->sellers[this->num_of_seller]->set_role("seller");
    this->sellers[this->num_of_seller]->set_income(0);
    this->sellers[this->num_of_seller]->set_name(name);
    this->sellers[this->num_of_seller]->set_family(family);
    this->sellers[this->num_of_seller]->set_username(username);
    this->sellers[this->num_of_seller]->set_password(password);
    this->sellers[this->num_of_seller]->set_adress(address);
    this->sellers[this->num_of_seller]->set_city(city);
    this->sellers[this->num_of_seller]->set_province(province);
    this->sellers[this->num_of_seller]->set_ncode(national_code);
    this->sellers[this->num_of_seller]->set_phone_number(phone_number);
    this->sellers[this->num_of_seller]->set_email(email);
    this->sellers[this->num_of_seller]->set_sex(sex);
    this->set_num_of_seller(numbers+1);
    return;
}
