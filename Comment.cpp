#include "Comment.h"

Comment::Comment(tm now_time,QString sender,QString commodity)
{
    this->sender = sender;
    this->commodity = commodity;
    this->date_of_birth = now_time;
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

tm Comment::get_date_of_birth()
{
    return this->date_of_birth;
}

void Comment::set_sender(QString sender)
{
    this->sender = sender;
    return;
}

QString Comment::get_sender()
{
    return this->sender;
}

void Comment::set_commodity(QString commodity)
{
    this->commodity = commodity;
    return;
}

QString Comment::get_commodity()
{
    return this->commodity;
}
