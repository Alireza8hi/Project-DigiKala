#ifndef ALLCOMMODITYWINDOW_H
#define ALLCOMMODITYWINDOW_H

#include <QMainWindow>

namespace Ui {
class AllCommodityWindow;
}

class AllCommodityWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AllCommodityWindow(QWidget *parent = nullptr);
    ~AllCommodityWindow();

private:
    Ui::AllCommodityWindow *ui;
};

#endif // ALLCOMMODITYWINDOW_H
