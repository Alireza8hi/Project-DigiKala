#include "PostAdminWindow.h"
#include "ui_PostAdminWindow.h"

PostAdminWindow::PostAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PostAdminWindow)
{
    ui->setupUi(this);
}

PostAdminWindow::~PostAdminWindow()
{
    delete ui;
}
