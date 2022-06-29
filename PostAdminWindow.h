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

private:
    Ui::PostAdminWindow *ui;
};

#endif // POSTADMINWINDOW_H
