#ifndef LISTOFCOMMODITIESDIALOG_H
#define LISTOFCOMMODITIESDIALOG_H

#include <QDialog>

namespace Ui {
class ListOFCommoditiesDialog;
}

class ListOFCommoditiesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListOFCommoditiesDialog(QWidget *parent = nullptr);
    ~ListOFCommoditiesDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::ListOFCommoditiesDialog *ui;
};

#endif // LISTOFCOMMODITIESDIALOG_H
