#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QMainWindow>

namespace Ui {
class CustomerWindow;
}

class CustomerWindow : public QMainWindow
{
        Q_OBJECT

public:
    explicit CustomerWindow(QWidget *parent = nullptr);
    ~CustomerWindow();


private slots:
    void on_AllCommodityBtn_clicked();

    void on_CategoryBtn_clicked();

    void on_SearchBtn_clicked();

    void on_ReturnAct_triggered();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_CartBtn_clicked();

private:
    Ui::CustomerWindow *ui;
};

#endif // CUSTOMERWINDOW_H
