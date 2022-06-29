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

private:
    Ui::SupportAdminWindow *ui;
};

#endif // SUPPORTADMINWINDOW_H
