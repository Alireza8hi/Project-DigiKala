#ifndef ALLCOMMODITYWINDOW_H
#define ALLCOMMODITYWINDOW_H

#include <QMainWindow>
#include <Digikala.h>
extern DigiKala site;

namespace Ui {
class AllCommodityWindow;
}

class AllCommodityWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AllCommodityWindow(QWidget *parent = nullptr);
    explicit AllCommodityWindow(QWidget *parent , string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity,long max_cost,int min_cost);
    ~AllCommodityWindow();

private slots:
    void on_ReturnAct_triggered();

private:
    Ui::AllCommodityWindow *ui;
};

#endif // ALLCOMMODITYWINDOW_H
