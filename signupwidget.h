#ifndef SIGNUPWIDGET_H
#define SIGNUPWIDGET_H

#include <QDialog>

namespace Ui {
class SignUpWidget;
}

class SignUpWidget : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpWidget(QWidget *parent = nullptr);
    ~SignUpWidget();

private:
    Ui::SignUpWidget *ui;
};

#endif // SIGNUPWIDGET_H
