#include "signuprules.h"
#include "ui_signuprules.h"

SignUpRules::SignUpRules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpRules)
{
    ui->setupUi(this);
}

SignUpRules::~SignUpRules()
{
    delete ui;
}
