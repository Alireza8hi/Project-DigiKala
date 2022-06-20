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
public:
    Complaint(tm now_time,QString sender,QString commodity);
    ~Complaint();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth();
    void set_sender(QString sender);
    QString get_sender();
    void set_commodity(QString commodity);
    QString get_commodity();
};

#endif // COMPLAINT_H
