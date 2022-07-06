#include "wishlistdialog.h"
#include "ui_wishlistdialog.h"

WishListDialog::WishListDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WishListDialog)
{
    ui->setupUi(this);
}

WishListDialog::~WishListDialog()
{
    delete ui;
}
