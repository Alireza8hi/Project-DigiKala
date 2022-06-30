#ifndef REVIEWADMINWINDOW_H
#define REVIEWADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class ReviewAdminWindow;
}

class ReviewAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReviewAdminWindow(QWidget *parent = nullptr);
    ~ReviewAdminWindow();
private slots:
    void on_AllCommoditiesBtn_clicked();

    void on_CategoriesBtn_clicked();

    void on_SearchBtn_clicked();

    void on_OpenProfileAct_triggered();

    void on_MessagesAct_triggered();

    void on_ReturnAct_triggered();

private:
    Ui::ReviewAdminWindow *ui;
};

#endif // REVIEWADMINWINDOW_H
