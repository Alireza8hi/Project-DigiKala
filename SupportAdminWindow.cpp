#include "SupportAdminWindow.h"
#include "ui_SupportAdminWindow.h"

SupportAdminWindow::SupportAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SupportAdminWindow)
{
    ui->setupUi(this);
}

SupportAdminWindow::~SupportAdminWindow()
{
    delete ui;
}
