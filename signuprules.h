#ifndef SIGNUPRULES_H
#define SIGNUPRULES_H

#include <QDialog>

namespace Ui {
class SignUpRules;
}

class SignUpRules : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpRules(QWidget *parent = nullptr);
    ~SignUpRules();

private:
    Ui::SignUpRules *ui;
};

#endif // SIGNUPRULES_H
