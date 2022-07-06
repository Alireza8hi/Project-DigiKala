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

private:
    Ui::MainAdminWindow *ui;
};

#endif // MainAdminWINDOW_H
