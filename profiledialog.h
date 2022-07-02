#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H

#include <QDialog>

namespace Ui {
class ProfileDialog;
}

class ProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileDialog(QWidget *parent = nullptr);
    ~ProfileDialog();

private slots:
    void on_EditPhoneBtn_clicked();

    void on_EditStateBtn_clicked();

    void on_EditCityBtn_clicked();

    void on_EditAddressBtn_clicked();

    void on_EditEmailBtn_clicked();

    void on_EditPassBtn_clicked();

private:
    Ui::ProfileDialog *ui;
};

#endif // PROFILEDIALOG_H
