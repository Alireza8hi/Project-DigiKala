#ifndef CATEGORYWINDOW_H
#define CATEGORYWINDOW_H

#include <QMainWindow>

namespace Ui {
class CategoryWindow;
}

class CategoryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CategoryWindow(QWidget *parent = nullptr);
    ~CategoryWindow();

private:
    Ui::CategoryWindow *ui;
};

#endif // CATEGORYWINDOW_H
