#ifndef MAINADMINWINDOW_H
#define MAINADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainAdminWindow;
}

class MainAdminWindow : public QMainWindow
{
        Q_OBJECT

public:
    explicit MainAdminWindow(QWidget *parent = nullptr);
    ~MainAdminWindow();

private slots:
    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_AllCommoditysBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_CartBtn_clicked();

    void on_WishListBtn_clicked();

    void on_OpenOtherAdminsBtn_clicked();

    void on_ChangeAdminIncomeBtn_clicked();

    void on_RemoveAdminBtn_clicked();

    void on_AddAdminBtn_clicked();

    void on_SuccessfulSellersBtn_clicked();

    void on_BestCustomersBtn_clicked();

    void on_ReadUserInfoBtn_clicked();

    void on_CommodityProfitBtn_clicked();

    void on_SoldCommoditiesBtn_clicked();

    void on_ChangeAdminBtn_clicked();

private:
    Ui::MainAdminWindow *ui;
};

#endif // MainAdminWINDOW_H
