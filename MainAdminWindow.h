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

private:
    Ui::MainAdminWindow *ui;
};

#endif // MainAdminWINDOW_H
