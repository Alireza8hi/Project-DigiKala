#ifndef SELLERWINDOW_H
#define SELLERWINDOW_H

#include <QMainWindow>

namespace Ui {
class SellerWindow;
}

class SellerWindow : public QMainWindow
{
        Q_OBJECT

public:
    explicit SellerWindow(QWidget *parent = nullptr);
    ~SellerWindow();

private slots:
    void on_AllCommoditiesBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_WishListBtn_clicked();

    void on_CartBtn_clicked();

    void on_DeletedCommoditieBtn_clicked();

    void on_CommoditiesExpireBtn_clicked();

    void on_SellCommodityBtn_clicked();

    void on_SignOutBtn_triggered();

private:
    Ui::SellerWindow *ui;
};

#endif // SellerWINDOW_H
