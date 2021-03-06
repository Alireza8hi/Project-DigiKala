#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "accountwindow.h"
#include "categorywindow.h"
#include "allcommoditywindow.h"
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

    void on_AllCommodityBtn_clicked();

    void on_CategoryBtn_clicked();

    void on_AccountAct_triggered();

    void on_SearchBtn_clicked();

    void on_VoroodVaSabteNam_triggered();

    void on_BazgardandanKalaAct_triggered();

    void on_RavanSabtSefareshAct_triggered();

    void on_PrivacyAct_triggered();

    void on_TermOfUseAct_triggered();

    void on_EmailAct_triggered();

    void on_FaxAct_triggered();

private:
    Ui::MainWindow *ui;
    AccountWindow *AccountWindow;
    CategoryWindow *CategoryWindow;
    AllCommodityWindow *AllCommodityWindow;

};
#endif // MAINWINDOW_H
