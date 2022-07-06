#ifndef POSTADMINWINDOW_H
#define POSTADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class PostAdminWindow;
}

class PostAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostAdminWindow(QWidget *parent = nullptr);
    ~PostAdminWindow();

private slots:
    void on_AllCommoditiesBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_CartBtn_clicked();

    void on_WishListBtn_clicked();

private:
    Ui::PostAdminWindow *ui;
};

#endif // POSTADMINWINDOW_H
