#include "allcommoditywindow.h"
#include "ui_allcommoditywindow.h"

AllCommodityWindow::AllCommodityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    ui->setupUi(this);

}

AllCommodityWindow::AllCommodityWindow(QWidget *parent, string name_commodity, bool elcectric, bool available, int id_commodity, string category_commodity, long max_cost, int min_cost):
    QMainWindow(parent),
    ui(new Ui::AllCommodityWindow)
{
    deque<Commodity> commodity=site.show_commodity(name_commodity,elcectric,available,id_commodity ,category_commodity,max_cost,min_cost);
    ui->setupUi(this);

}

AllCommodityWindow::~AllCommodityWindow()
{
    delete ui;
}

void AllCommodityWindow::on_ReturnAct_triggered()
{
    parentWidget()->show();
}

