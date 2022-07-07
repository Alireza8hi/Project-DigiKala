#ifndef COMMODITIESAWAITINGAPPROVALDIALOG_H
#define COMMODITIESAWAITINGAPPROVALDIALOG_H

#include <QDialog>

namespace Ui {
class CommoditiesAwaitingApprovalDialog;
}

class CommoditiesAwaitingApprovalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CommoditiesAwaitingApprovalDialog(QWidget *parent = nullptr);
    ~CommoditiesAwaitingApprovalDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::CommoditiesAwaitingApprovalDialog *ui;
};

#endif // COMMODITIESAWAITINGAPPROVALDIALOG_H
