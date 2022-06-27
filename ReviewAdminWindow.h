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

private:
    Ui::ReviewAdminWindow *ui;
};

#endif // REVIEWADMINWINDOW_H
