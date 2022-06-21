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
    QString description;
public:
    Comment(tm now_time,QString sender,QString commodity,QString description);
    Comment();
    ~Comment();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth()const;
    void set_sender(QString sender);
    QString get_sender()const;
    void set_commodity(QString commodity);
    QString get_commodity()const;
    void set_description(QString description);
    QString get_description()const;
};

#endif // COMMENT_H
