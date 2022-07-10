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
    explicit AllCommodityWindow(QWidget *parent = nullptr , string name_commodity = "", bool elcectric =false, bool available = false, int id_commodity = 0, string category_commodity = "",long max_cost = 0,int min_cost = 0);
    ~AllCommodityWindow();

private slots:
    void on_ReturnAct_triggered();

private:
    Ui::AllCommodityWindow *ui;
};

#endif // ALLCOMMODITYWINDOW_H
