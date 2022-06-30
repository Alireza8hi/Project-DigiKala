#ifndef SUPPORTADMINWINDOW_H
#define SUPPORTADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SupportAdminWindow;
}

class SupportAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SupportAdminWindow(QWidget *parent = nullptr);
    ~SupportAdminWindow();

private slots:
    void on_AllCommoditiesBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_ReturnAct_triggered();

private:
    Ui::SupportAdminWindow *ui;
};

#endif // SUPPORTADMINWINDOW_H
