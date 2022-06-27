#include "MainAdminWindow.h"
#include "ui_MainAdminWindow.h"

MainAdminWindow::MainAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainAdminWindow)
{
    ui->setupUi(this);
}

MainAdminWindow::~MainAdminWindow()
{
    delete ui;
}
