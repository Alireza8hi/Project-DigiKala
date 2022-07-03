#include "Comment.h"

using namespace std;

Comment::Comment(tm now_time,string sender,int commodity_id,string description)
{
    this->sender = sender;
    this->commodity_id = commodity_id;
    this->date_of_birth = now_time;
    this->description = description;
    return;
}

Comment::Comment()
{
    return;
}

Comment::Comment(Comment &other)
{
    this->sender=other.sender;
    this->commodity_id=other.commodity_id;
    this->date_of_birth=other.date_of_birth;
    this->description=other.description;
    return;
}

Comment::~Comment()
{
    this->commodity_id = 0;
    this->sender = nullptr;
    return;
}

Comment &Comment::operator=(const Comment &s)
{
    this->~Comment();
    this->sender=s.sender;
    this->commodity_id=s.commodity_id;
    this->date_of_birth=s.date_of_birth;
    this->description=s.description;
    return *this;
}

void Comment::set_date_of_birth(tm time)
{
    this->date_of_birth = time;
    return;
}

tm Comment::get_date_of_birth()const
{
    return this->date_of_birth;
}

void Comment::set_sender(string sender)
{
    this->sender = sender;
    return;
}

string Comment::get_sender()const
{
    return this->sender;
}

void Comment::set_commodity_id(int commodity_id)
{
    this->commodity_id = commodity_id;
    return;
}

int Comment::get_commodity_id()const
{
    return this->commodity_id;
}

void Comment::set_description(string description)
{
    this->description = description;
    return;
}

string Comment::get_description() const
{
    return this->description;
}
