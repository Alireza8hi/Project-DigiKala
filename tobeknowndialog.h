#ifndef TOBEKNOWNDIALOG_H
#define TOBEKNOWNDIALOG_H

#include <QDialog>

namespace Ui {
class ToBeKnownDialog;
}

class ToBeKnownDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ToBeKnownDialog(QWidget *parent = nullptr , int a=0);
    ~ToBeKnownDialog();

private:
    Ui::ToBeKnownDialog *ui;
};

#endif // TOBEKNOWNDIALOG_H
