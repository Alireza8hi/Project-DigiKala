#ifndef COMMODITYDIALOG_H
#define COMMODITYDIALOG_H

#include <QDialog>

namespace Ui {
class CommodityDialog;
}

class CommodityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommodityDialog(int number, QWidget *parent = nullptr);
    ~CommodityDialog();

private slots:
    void on_ReturnBtn_clicked();

    void on_pushButton_clicked();

    void on_CommentsBtn_clicked();

    void on_AddToWishListBtn_clicked();

private:
    Ui::CommodityDialog *ui;
};

#endif // COMMODITYDIALOG_H
