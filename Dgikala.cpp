#include "Digikala.h"
#include "User.h"

DigiKala::DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_sold_commodities = num_of_customer = num_of_seller = 0;
    this->num_of_users = 38;
    this->money = 10000000;
    this->num_of_store_admin = 3;
    this->num_of_support_admin =2;
    for(int counter = 0;counter<num_of_users;counter++)
    {
        users[counter].set_address("-");
        users[counter].set_email("-");
        users[counter].set_sex(0);
        users[counter].set_ncode("-");
        users[counter].set_phone_number("-");
        users[counter].set_city("-");
    }
    users[0].set_name("main_admin");
    users[0].set_family("main_admin");
    users[0].set_username("main_admin");
    users[0].set_income(2000);
    users[0].set_province("-");
    users[0].set_role("main_admin");
    users[0].set_password("main_admin");
    users[1].set_name("review_admin");
    users[1].set_family("review_admin");
    users[1].set_username("review_admin");
    users[1].set_role("review_admin");
    users[1].set_password("review_admin");
    users[1].set_income(1000);
    users[1].set_province("-");
    for(int counter = 2;counter<33;counter++)
    {
        users[counter].set_income(800);
        users[counter].set_role("post_admin");
    }
    users[2].set_name("post_admin1");
    users[2].set_family("post_admin1");
    users[2].set_username("post_admin1");
    users[2].set_password("post_admin1");
    users[2].set_province("Tehran");
    users[3].set_name("post_admin2");
    users[3].set_family("post_admin2");
    users[3].set_username("post_admin2");
    users[3].set_password("post_admin2");
    users[3].set_province("Esfahan");
    users[4].set_name("post_admin3");
    users[4].set_family("post_admin3");
    users[4].set_username("post_admin3");
    users[4].set_password("post_admin3");
    users[4].set_province("Qom");
    users[5].set_name("post_admin4");
    users[5].set_family("post_admin4");
    users[5].set_username("post_admin4");
    users[5].set_password("post_admin4");
    users[5].set_province("West Azarbaijan");
    users[6].set_name("post_admin5");
    users[6].set_family("post_admin5");
    users[6].set_username("post_admin5");
    users[6].set_password("post_admin5");
    users[6].set_province("East Azarbaijan");
    users[7].set_name("post_admin6");
    users[7].set_family("post_admin6");
    users[7].set_username("post_admin6");
    users[7].set_password("post_admin6");
    users[7].set_province("Ardabil");
    users[8].set_name("post_admin7");
    users[8].set_family("post_admin7");
    users[8].set_username("post_admin7");
    users[8].set_password("post_admin7");
    users[8].set_province("Gilan");
    users[9].set_name("post_admin8");
    users[9].set_family("post_admin8");
    users[9].set_username("post_admin8");
    users[9].set_password("post_admin8");
    users[9].set_province("Zanjan");
    users[10].set_name("post_admin9");
    users[10].set_family("post_admin9");
    users[10].set_username("post_admin9");
    users[10].set_password("post_admin9");
    users[10].set_province("Kurdistan");
    users[11].set_name("post_admin10");
    users[11].set_family("post_admin10");
    users[11].set_username("post_admin10");
    users[11].set_password("post_admin10");
    users[11].set_province("Kermanshah");
    users[12].set_name("post_admin11");
    users[12].set_family("post_admin11");
    users[12].set_username("post_admin11");
    users[12].set_password("post_admin11");
    users[12].set_province("Hamadan");
    users[13].set_name("post_admin12");
    users[13].set_family("post_admin12");
    users[13].set_username("post_admin12");
    users[13].set_password("post_admin12");
    users[13].set_province("Qazvin");
    users[14].set_name("post_admin13");
    users[14].set_family("post_admin13");
    users[14].set_username("post_admin13");
    users[14].set_password("post_admin13");
    users[14].set_province("Alborz");
    users[15].set_name("post_admin14");
    users[15].set_family("post_admin14");
    users[15].set_username("post_admin14");
    users[15].set_password("post_admin14");
    users[15].set_province("Mazandaran");
    users[16].set_name("post_admin15");
    users[16].set_family("post_admin15");
    users[16].set_username("post_admin15");
    users[16].set_password("post_admin15");
    users[16].set_province("Markazi");
    users[17].set_name("post_admin16");
    users[17].set_family("post_admin16");
    users[17].set_username("post_admin16");
    users[17].set_password("post_admin16");
    users[17].set_province("Ilam");
    users[18].set_name("post_admin17");
    users[18].set_family("post_admin17");
    users[18].set_username("post_admin17");
    users[18].set_password("post_admin17");
    users[18].set_province("Lorestan");
    users[19].set_name("post_admin18");
    users[19].set_family("post_admin18");
    users[19].set_username("post_admin18");
    users[19].set_password("post_admin18");
    users[19].set_province("Golestan");
    users[20].set_name("post_admin19");
    users[20].set_family("post_admin19");
    users[20].set_username("post_admin19");
    users[20].set_password("post_admin19");
    users[20].set_province("Khuzestan");
    users[21].set_name("post_admin20");
    users[21].set_family("post_admin20");
    users[21].set_username("post_admin20");
    users[21].set_password("post_admin20");
    users[21].set_province("Chaharmahal and Bakhtiari");
    users[22].set_name("post_admin21");
    users[22].set_family("post_admin21");
    users[22].set_username("post_admin21");
    users[22].set_password("post_admin21");
    users[22].set_province("Semnan");
    users[23].set_name("post_admin22");
    users[23].set_family("post_admin22");
    users[23].set_username("post_admin22");
    users[23].set_password("post_admin22");
    users[23].set_province("North Khorasan");
    users[24].set_name("post_admin23");
    users[24].set_family("post_admin23");
    users[24].set_username("post_admin23");
    users[24].set_password("post_admin23");
    users[24].set_province("Razavi Khorasan");
    users[25].set_name("post_admin24");
    users[25].set_family("post_admin24");
    users[25].set_username("post_admin24");
    users[25].set_password("post_admin24");
    users[25].set_province("South Khorasan");
    users[26].set_name("post_admin25");
    users[26].set_family("post_admin25");
    users[26].set_username("post_admin25");
    users[26].set_password("post_admin25");
    users[26].set_province("Yazd");
    users[27].set_name("post_admin26");
    users[27].set_family("post_admin26");
    users[27].set_username("post_admin26");
    users[27].set_password("post_admin26");
    users[27].set_province("Kohgiluyeh and Boyer-ahmad");
    users[28].set_name("post_admin27");
    users[28].set_family("post_admin27");
    users[28].set_username("post_admin27");
    users[28].set_password("post_admin27");
    users[28].set_province("Fars");
    users[29].set_name("post_admin28");
    users[29].set_family("post_admin28");
    users[29].set_username("post_admin28");
    users[29].set_password("post_admin28");
    users[29].set_province("Kerman");
    users[30].set_name("post_admin29");
    users[30].set_family("post_admin29");
    users[30].set_username("post_admin29");
    users[30].set_password("post_admin29");
    users[30].set_province("Bushehr");
    users[31].set_name("post_admin30");
    users[31].set_family("post_admin30");
    users[31].set_username("post_admin30");
    users[31].set_password("post_admin30");
    users[31].set_province("Hormozgan");
    users[32].set_name("post_admin31");
    users[32].set_family("post_admin31");
    users[32].set_username("post_admin31");
    users[32].set_password("post_admin31");
    users[32].set_province("Sistan and Baluchestan");
    for(size_t counter = 33;counter<36;counter++)
    {
        users[counter].set_income(1500);
        users[counter].set_province("-");
        users[counter].set_role("store_admin");
    }
    users[33].set_name("store_admin1");
    users[33].set_family("store_admin1");
    users[33].set_username("store_admin1");
    users[33].set_password("store_admin1");
    users[34].set_name("store_admin2");
    users[34].set_family("store_admin2");
    users[34].set_username("store_admin2");
    users[34].set_password("store_admin2");
    users[35].set_name("store_admin3");
    users[35].set_family("store_admin3");
    users[35].set_username("store_admin3");
    users[35].set_password("store_admin3");
    for(size_t counter = 36;counter<38;counter++)
    {
        users[counter].set_income(1200);
        users[counter].set_province("-");
        users[counter].set_role("support_admin");
    }
    users[36].set_name("support_admin1");
    users[36].set_family("support_admin1");
    users[36].set_username("support_admin1");
    users[36].set_password("support_admin1");
    users[37].set_name("support_admin2");
    users[37].set_family("support_admin2");
    users[37].set_username("support_admin2");
    users[37].set_password("support_admin2");
    return;
}

deque<Commodity> DigiKala::show_commodity(string name_commodity, bool elcectric , bool available, int id_commodity, string category_commodity, long max_cost,int min_cost)
{
        deque<Commodity> commodity;
        int end=0;
        if(true)
        {
            int check=0;
            for(int i=0;i<1500;i++)
            {
                if(site.commodities[i].get_id()!=0 && site.commodities[i].get_is_confirm() && !(site.commodities->get_is_deleted()))
                {
                    check+=1;
                    break;
                }
                else
                {
                    if(site.commodities[i].get_id()==0)
                        if(check==0)
                        {
                            QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product in the program",QMessageBox::Ok|QMessageBox::Cancel);
                            msg_error->show();
                            connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                            end=1;
                            break;
                        }
                }

            }
        }
        if(end!=1 && id_commodity!=0)
        {
            for(int i=0;i<1500;i++)
            {
                if(site.commodities[i].get_id()==id_commodity)
                {
                    commodity.push_back(site.commodities[i]);
                    end=1;
                    break;
                }
                if(site.commodities[i].get_id()==0)
                {
                    break;
                }
            }
            if(end!=1)
            {
                QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product with this product code",QMessageBox::Ok|QMessageBox::Cancel);
                msg_error->show();
                connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                end=1;
            }
        }
        if(end!=1 && category_commodity=="all")
        {
            for(int i=0;i<1500;i++)
            {
                if(site.commodities[i].get_id()==0)
                {
                    break;
                }
                else
                {
                    commodity.push_back(commodities[i]);
                }
            }
        }
        else
            if(end!=1)
            {
                for(int i=0;i<1500;i++)
                {
                    if(site.commodities[i].get_id()==0)
                    {
                        break;
                    }
                    else
                    {
                        if(site.commodities[i].get_category()==category_commodity)
                        {
                            commodity.push_back(site.commodities[i]);
                        }
                    }
                }
                if(size(commodity)==0)
                {
                    QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product in this category",QMessageBox::Ok|QMessageBox::Cancel);
                    msg_error->show();
                    connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                    end=1;
                }
            }

        if(end!=1)
        {
            for(int i=0;i<size(commodity);i++)
            {
                if ((commodity.at(i).get_is_deleted()))
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }
         }
        if(end!=1)
        {
            for(int i=0;i<size(commodity);i++)
            {
                if (!(commodity.at(i).get_is_confirm()))
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }
         }
        if(end!=1 && name_commodity!="")
        {
            for(int i=0;i<size(commodity);i++)
            {
                size_t found =commodity.at(i).get_name().find(name_commodity);
                if (found == string::npos)
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }
            if(size(commodity)==0)
            {
                QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product with this specification",QMessageBox::Ok|QMessageBox::Cancel);
                msg_error->show();
                connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                end=1;
            }
        }

        if(elcectric && end!=1)
        {
            for(int i=0;i<size(commodity);i++)
            {
                if (!(commodity.at(i).get_is_electric()))
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }
            if(size(commodity)==0)
            {
                QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product with this specification",QMessageBox::Ok|QMessageBox::Cancel);
                msg_error->show();
                connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                end=1;
            }
        }

        if(available && end!=1)
        {
            for(int i=0;i<size(commodity);i++)
            {
                if(commodity.at(i).get_number()<=0)
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }
            if(size(commodity)==0)
            {
                QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product with this specification",QMessageBox::Ok|QMessageBox::Cancel);
                msg_error->show();
                connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                end=1;
            }
        }
        if(end!=1)
        {
            for(int i=0;i<size(commodity);i++)
            {
                if(commodity.at(i).get_cost()<min_cost || commodity.at(i).get_cost()> max_cost )
                {
                    commodity.erase(commodity.cbegin()+i);
                }
            }

            if(size(commodity)==0)
            {
                QMessageBox * msg_error = new QMessageBox(QMessageBox::Critical,"Error","There is no product with this specification",QMessageBox::Ok|QMessageBox::Cancel);
                msg_error->show();
                connect(msg_error,&QMessageBox::buttonClicked,msg_error,&QMessageBox::deleteLater,Qt::QueuedConnection);
                end=1;
            }
        }
            return commodity;
    }

DigiKala::~DigiKala()
{
    this->income = this->num_of_commodities = this->num_of_users = this->num_of_sold_commodities = this->money = this->num_of_customer = this->num_of_seller = this->num_of_store_admin = this->num_of_support_admin =0;
    return;
}

void DigiKala::set_num_of_seller(int num_of_seller)
{
    this->num_of_seller = num_of_seller;
    return;
}

int DigiKala::get_num_of_seller() const
{
    return num_of_seller;
}

void DigiKala::set_num_of_customer(int num_of_customer)
{
    this->num_of_customer = num_of_customer;
    return;
}

int DigiKala::get_num_of_customer() const
{
    return num_of_customer;
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

void DigiKala::set_num_of_sold_commodities(int num_of_sold_commodities)
{
    this->num_of_sold_commodities = num_of_sold_commodities;
    return;
}

int DigiKala::get_num_of_sold_commodities() const
{
    return this->num_of_sold_commodities;
}

void DigiKala::set_num_of_users(int num_of_users)
{
    this->num_of_users = num_of_users;
    return;
}

int DigiKala::get_num_of_users() const
{
    return this->num_of_users;
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

User& DigiKala::get_user(int number)
{
    return this->users[number];
}
Commodity &DigiKala::get_commodity(int number)
{
    return this->commodities[number];
}

//void DigiKala::set_commodities(Commodity commodities)
//{
//    this->commodities = commodities;
//    return;
//}

//vector<Commodity> DigiKala::get_commodities() const
//{
//    return this->commodities;
//}

void DigiKala::set_sold_commodities_id(int sold_commodities_id)
{
    this->sold_commodities_id[site.get_num_of_sold_commodities()] = sold_commodities_id;
    return;
}

int DigiKala::get_sold_commodities_id(int number) const
{
    return this->sold_commodities_id[number];
}

void DigiKala::add_customer(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex)
{
    int numberc = num_of_users;
    this->users[numberc].set_role("customer");
    this->users[numberc].set_income(0);
    this->users[numberc].set_name(name);
    this->users[numberc].set_family(family);
    this->users[numberc].set_username(username);
    this->users[numberc].set_password(password);
    this->users[numberc].set_address(address);
    this->users[numberc].set_city(city);
    this->users[numberc].set_province(province);
    this->users[numberc].set_ncode(national_code);
    this->users[numberc].set_phone_number(phone_number);
    this->users[numberc].set_email(email);
    this->users[numberc].set_sex(sex);
    this->num_of_users=numberc+1;
    this->num_of_customer=num_of_customer+1;
    return;
}

void DigiKala::add_seller(string name, string family, string username, string password, string address, string city, string province, string national_code, string phone_number, string email, int sex)
{
    int numbers = this->num_of_users;
    this->users[numbers].set_role("seller");
    this->users[numbers].set_income(0);
    this->users[numbers].set_name(name);
    this->users[numbers].set_family(family);
    this->users[numbers].set_username(username);
    this->users[numbers].set_password(password);
    this->users[numbers].set_address(address);
    this->users[numbers].set_city(city);
    this->users[numbers].set_province(province);
    this->users[numbers].set_ncode(national_code);
    this->users[numbers].set_phone_number(phone_number);
    this->users[numbers].set_email(email);
    this->users[numbers].set_sex(sex);
    this->num_of_seller=num_of_seller+1;
    this->num_of_users=numbers+1;
    return;
}

int DigiKala::read_digi_kala(const char * file , int seekbeg )
{
    ifstream input_file(file,ios::binary |ios::app);
    input_file.seekg(seekbeg , input_file.beg);
    input_file.read((char*)this,sizeof(DigiKala));
    int seekend=input_file.tellg();
    input_file.close();
    return seekend;
}

void DigiKala::write_digi_kala(const char * file,int seekbeg)
{
    ofstream output_file(file,ios::binary );
    output_file.seekp(seekbeg);
    output_file.write((char*)this,sizeof(DigiKala));
    output_file.close();
    return;
}
