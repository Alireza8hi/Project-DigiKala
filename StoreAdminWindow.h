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

private:
    Ui::StoreAdminWindow *ui;
};

#endif // STOREADMINWINDOW_H
