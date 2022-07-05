#ifndef CARTDIALOG_H
#define CARTDIALOG_H

#include <QDialog>

namespace Ui {
class CartDialog;
}

class CartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CartDialog(QWidget *parent = nullptr);
    ~CartDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::CartDialog *ui;
};

#endif // CARTDIALOG_H
