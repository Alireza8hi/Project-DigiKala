#include "Complaint.h"

Complaint::Complaint(tm now_time,QString sender,QString commodity,QString description)
{
    this->sender = sender;
    this->commodity = commodity;
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
    this->commodity = nullptr;
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

void Complaint::set_sender(QString sender)
{
    this->sender = sender;
    return;
}

QString Complaint::get_sender()const
{
    return this->sender;
}

void Complaint::set_commodity(QString commodity)
{
    this->commodity = commodity;
    return;
}

QString Complaint::get_commodity()const
{
    return this->commodity;
}

void Complaint::set_description(QString description)
{
    this->description = description;
    return;
}

QString Complaint::get_description() const
{
    return this->description;
}
