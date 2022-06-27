#include "ReviewAdminWindow.h"
#include "ui_ReviewAdminWindow.h"

ReviewAdminWindow::ReviewAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReviewAdminWindow)
{
    ui->setupUi(this);
}

ReviewAdminWindow::~ReviewAdminWindow()
{
    delete ui;
}
