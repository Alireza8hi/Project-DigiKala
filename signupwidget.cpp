#include "signupwidget.h"
#include "ui_signupwidget.h"

SignUpWidget::SignUpWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpWidget)
{
    ui->setupUi(this);
}

SignUpWidget::~SignUpWidget()
{
    delete ui;
}
