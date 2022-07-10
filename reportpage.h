#ifndef REPORTPAGE_H
#define REPORTPAGE_H

#include <QDialog>

namespace Ui {
class report_page;
}

class report_page : public QDialog
{
    Q_OBJECT

public:
    explicit report_page(QWidget *parent = nullptr, int id=0);
    ~report_page();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::report_page *ui;
    QString username;
    QString id;
};

#endif // REPORTPAGE_H
