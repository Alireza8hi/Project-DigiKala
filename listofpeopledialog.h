#ifndef LISTOFPEOPLEDIALOG_H
#define LISTOFPEOPLEDIALOG_H

#include <QDialog>

namespace Ui {
class ListOfPeopleDialog;
}

class ListOfPeopleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListOfPeopleDialog(QWidget *parent = nullptr);
    ~ListOfPeopleDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::ListOfPeopleDialog *ui;
};

#endif // LISTOFPEOPLEDIALOG_H
