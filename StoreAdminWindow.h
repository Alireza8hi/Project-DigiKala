#ifndef STOREADMINWINDOW_H
#define STOREADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class StoreAdminWindow;
}

class StoreAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StoreAdminWindow(QWidget *parent = nullptr);
    ~StoreAdminWindow();

private slots:
    void on_AllCommoditiesBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_CartBtn_clicked();

    void on_WishListBtn_clicked();

    void on_DeleteCommoditiesBtn_clicked();

    void on_DeletedCommoditiesBtn_clicked();

    void on_CommoditiesExpireBtn_clicked();

    void on_DeletetingCommodityBtn_clicked();

    void on_SellCommodityBtn_clicked();

    void on_EditCommodityBtn_clicked();

    void on_EditCommodityConfirmBtn_clicked();

private:
    Ui::StoreAdminWindow *ui;
};

#endif // STOREADMINWINDOW_H
