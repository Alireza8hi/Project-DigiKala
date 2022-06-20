#ifndef COMMENT_H
#define COMMENT_H

#include <QObject>
#include <ctime>

class Comment : public QObject
{
    Q_OBJECT
private:
    tm date_of_birth;
    QString sender;
    QString commodity;
public:
    Comment(tm now_time,QString sender,QString commodity);
    ~Comment();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth();
    void set_sender(QString sender);
    QString get_sender();
    void set_commodity(QString commodity);
    QString get_commodity();
};

#endif // COMMENT_H
