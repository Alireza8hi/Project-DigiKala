#ifndef ACCOUNTWINDOW_H
#define ACCOUNTWINDOW_H

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

private:
    Ui::AccountWindow *ui;
};

#endif // ACCOUNTWINDOW_H
