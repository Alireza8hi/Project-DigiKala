#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

#include "signupdialog.h"
#include <QMainWindow>

namespace Ui {
class AccountWindow;
}

class AccountWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccountWindow(QWidget *parent = nullptr);
    ~AccountWindow();

private slots:
    void on_LoginBtn_clicked();

    void on_AdminBtn_clicked();

    void on_SignUpBtn_clicked();

    void on_ReturnBtn_triggered();

    void on_UserSignInBtn_clicked();

private:
    Ui::AccountWindow *ui;
    SignUpDialog *SignUpDialog;
};

#endif // ACCOUNTWINDOW_H
