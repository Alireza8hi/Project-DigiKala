#ifndef COMPLAINT_H
#define COMPLAINT_H

#include <QObject>

class Complaint : public QObject
{
    Q_OBJECT
private:
    tm date_of_birth;
    QString sender;
    int commodity_id;
    QString description;
public:
    Complaint(tm now_time,QString sender,int commodity_id,QString description);
    Complaint();
    ~Complaint();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth()const;
    void set_sender(QString sender);
    QString get_sender()const;
    void set_commodity_id(int commodity_id);
    int get_commodity_id()const;
    void set_description(QString description);
    QString get_description()const;
};

#endif // COMPLAINT_H
