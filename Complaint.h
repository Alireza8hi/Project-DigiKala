#ifndef COMPLAINT_H
#define COMPLAINT_H

#include <QObject>

class Complaint : public QObject
{
    Q_OBJECT
private:
    tm date_of_birth;
    QString sender;
    QString commodity;
    QString description;
public:
    Complaint(tm now_time,QString sender,QString commodity,QString description);
    Complaint();
    ~Complaint();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth()const;
    void set_sender(QString sender);
    QString get_sender()const;
    void set_commodity(QString commodity);
    QString get_commodity()const;
    void set_description(QString description);
    QString get_description()const;
};

#endif // COMPLAINT_H
