#ifndef COMMODITIESAWAITINGPOSTDIALOG_H
#define COMMODITIESAWAITINGPOSTDIALOG_H

#include <QDialog>

namespace Ui {
class CommoditiesAwaitingPostDialog;
}

class CommoditiesAwaitingPostDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommoditiesAwaitingPostDialog(QWidget *parent = nullptr);
    ~CommoditiesAwaitingPostDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::CommoditiesAwaitingPostDialog *ui;
};

#endif // COMMODITIESAWAITINGPOSTDIALOG_H
