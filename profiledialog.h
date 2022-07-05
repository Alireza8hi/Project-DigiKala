#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H

#include "User.h"
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
    void CheckForPass();

private slots:
    void on_EditPhoneBtn_clicked();

    void on_EditStateBtn_clicked();

    void on_EditCityBtn_clicked();

    void on_EditAddressBtn_clicked();

    void on_EditEmailBtn_clicked();

    void on_EditPassBtn_clicked();

    void on_NewPassLe_textChanged(const QString &arg1);

    void on_NewPassConLe_textChanged(const QString &arg1);

    void on_EditNameBtn_clicked();

    void on_EditFNameBtn_clicked();

    void on_EditSexBtn_clicked();

    void on_EditNationalCodeBtn_clicked();

    void on_ReturnBtn_clicked();

    void on_PhoneLe_textChanged(const QString &arg1);

    void on_NationalCodeLe_textChanged(const QString &arg1);

    void on_EmailLe_textChanged(const QString &arg1);

    void on_NameLe_textChanged(const QString &arg1);

    void on_FNameLe_textChanged(const QString &arg1);

    void on_StateLe_textChanged(const QString &arg1);

    void on_CityLe_textChanged(const QString &arg1);


    void on_AddressLe_textChanged();

private:
    Ui::ProfileDialog *ui;
};

#endif // PROFILEDIALOG_H
