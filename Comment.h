#ifndef COMMENT_H
#define COMMENT_H

#include <QObject>
#include <ctime>

using namespace std;

class Comment : public QObject
{
    Q_OBJECT
private:
    tm date_of_birth;
    QString sender;
    int commodity_id;
    QString description;
public:
    Comment(tm now_time,QString sender,int commodity_id,QString description);
    Comment();
    Comment(Comment& other);
    ~Comment();
    Comment &operator=(const Comment& s);
    void set_date_of_birth(tm  time);
    tm get_date_of_birth()const;
    void set_sender(QString sender);
    QString get_sender()const;
    void set_commodity_id(int commodity_id);
    int get_commodity_id()const;
    void set_description(QString description);
    QString get_description()const;
};

#endif // COMMENT_H
