#ifndef ALLCOMMODITYWINDOW_H
#define ALLCOMMODITYWINDOW_H

#include <QMainWindow>
#include "Digikala.h"
extern DigiKala site;

namespace Ui {
class AllCommodityWindow;
}

class AllCommodityWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit AllCommodityWindow(QWidget *parent = nullptr );
    ~AllCommodityWindow();

private slots:
    void on_ReturnAct_triggered();

    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::AllCommodityWindow *ui;
};

#endif // ALLCOMMODITYWINDOW_H
