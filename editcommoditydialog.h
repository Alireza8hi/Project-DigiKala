#ifndef EDITCOMMODITYDIALOG_H
#define EDITCOMMODITYDIALOG_H

#include <QDialog>

namespace Ui {
class EditCommodityDialog;
}

class EditCommodityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditCommodityDialog(QWidget *parent = nullptr , int a=0);
    ~EditCommodityDialog();

private slots:
    void on_ReturnBtn_clicked();

    void on_ConfirmAndReturnBtn_clicked();

private:
    Ui::EditCommodityDialog *ui;
};

#endif // EDITCOMMODITYDIALOG_H
