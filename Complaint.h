#ifndef COMPLAINT_H
#define COMPLAINT_H

#include <QObject>

using namespace std;

class Complaint : public QObject
{
    Q_OBJECT
private:
    tm date_of_birth;
    string sender;
    int commodity_id;
    string description;
public:
    Complaint(tm now_time,string sender,int commodity_id,string description);
    Complaint();
    ~Complaint();
    void set_date_of_birth(tm  time);
    tm get_date_of_birth()const;
    void set_sender(string sender);
    string get_sender()const;
    void set_commodity_id(int commodity_id);
    int get_commodity_id()const;
    void set_description(string description);
    string get_description()const;
};

#endif // COMPLAINT_H
