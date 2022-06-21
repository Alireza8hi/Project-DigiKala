#include "Comment.h"

Comment::Comment(tm now_time,QString sender,QString commodity,QString description)
{
    this->sender = sender;
    this->commodity = commodity;
    this->date_of_birth = now_time;
    this->description = description;
    return;
}

Comment::Comment()
{
    return;
}

Comment::~Comment()
{
    this->commodity = nullptr;
    this->sender = nullptr;
    return;
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

void Comment::set_sender(QString sender)
{
    this->sender = sender;
    return;
}

QString Comment::get_sender()const
{
    return this->sender;
}

void Comment::set_commodity(QString commodity)
{
    this->commodity = commodity;
    return;
}

QString Comment::get_commodity()const
{
    return this->commodity;
}

void Comment::set_description(QString description)
{
    this->description = description;
    return;
}

QString Comment::get_description() const
{
    return this->description;
}
