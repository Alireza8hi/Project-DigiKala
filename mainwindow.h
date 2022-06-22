#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "accountwindow.h"
#include "categorywindow.h"
#include "homewindow.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_HomeBtn_clicked();

    void on_CategoryBtn_clicked();

    void on_AccountBtn_clicked();

private:
    Ui::MainWindow *ui;
    AccountWindow *AccountWindow;
    CategoryWindow *CategoryWindow;
    HomeWindow *HomeWindow;

};
#endif // MAINWINDOW_H
