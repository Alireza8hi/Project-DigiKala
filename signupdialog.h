#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include "User.h"
#include <QDialog>
#include <QValidator>

using namespace std;

namespace Ui {
class SignUpDialog;
}

class SignUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpDialog(QWidget *parent = nullptr);
    ~SignUpDialog();
    void CheckForOk();

private slots:

    void on_ShowPassCB_clicked();

    void on_NameLe_textChanged(const QString &arg1);
    void on_FNameLe_textChanged(const QString &arg1);
    void on_SexCombo_currentIndexChanged(int index);
    void on_NationalCodeLe_textChanged(const QString &arg1);
    void on_AddressLe_textChanged(const QString &arg1);
    void on_PhoneLe_textChanged(const QString &arg1);
    void on_EmailLe_textChanged(const QString &arg1);
    void on_UsernameLe_textChanged(const QString &arg1);
    void on_PassLe_textChanged(const QString &arg1);
    void on_PassConLe_textChanged(const QString &arg1);
    void on_RulesCB_clicked();
    void on_CityLe_textChanged(const QString &arg1);
    void on_StateLe_textChanged(const QString &arg1);

    void on_SeeRulesBtn_clicked();

    void on_OkBtn_clicked();

    void on_CancelBtn_clicked();

    void on_BackToLogIn_clicked();

    void on_RuleCombo_currentIndexChanged(int index);

    void on_RuleCombo_textActivated(const QString &arg1);

    void on_SexCombo_textActivated(const QString &arg1);

private:
    Ui::SignUpDialog *ui;
};
bool IsEmailValid(const std::string& email);
bool IsUsernameValid(string username);

#endif // SIGNUPDIALOG_H
