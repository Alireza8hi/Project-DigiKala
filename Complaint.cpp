#include "Complaint.h"

using namespace std;

Complaint::Complaint(tm now_time,string sender,int commodity_id,string description)
{
    this->sender = sender;
    this->commodity_id = commodity_id;
    this->date_of_birth = now_time;
    this->description = description;
    return;
}

Complaint::Complaint()
{
    return;
}

Complaint::~Complaint()
{
    this->commodity_id = 0;
    this->sender = nullptr;
    return;
}

void Complaint::set_date_of_birth(tm time)
{
    this->date_of_birth = time;
    return;
}

tm Complaint::get_date_of_birth()const
{
    return this->date_of_birth;
}

void Complaint::set_sender(string sender)
{
    this->sender = sender;
    return;
}

string Complaint::get_sender()const
{
    return this->sender;
}

void Complaint::set_commodity_id(int commodity_id)
{
    this->commodity_id = commodity_id;
    return;
}

int Complaint::get_commodity_id()const
{
    return this->commodity_id;
}

void Complaint::set_description(string description)
{
    this->description = description;
    return;
}

string Complaint::get_description() const
{
    return this->description;
}
