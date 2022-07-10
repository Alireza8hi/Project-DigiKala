#ifndef WISHLISTDIALOG_H
#define WISHLISTDIALOG_H

#include <QDialog>

namespace Ui {
class WishListDialog;
}

class WishListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WishListDialog(QWidget *parent = nullptr);
    ~WishListDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::WishListDialog *ui;
};

#endif // WISHLISTDIALOG_H
