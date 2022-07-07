#ifndef MESSAGESDIALOG_H
#define MESSAGESDIALOG_H

#include <QDialog>

namespace Ui {
class MessagesDialog;
}

class MessagesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MessagesDialog(QWidget *parent = nullptr);
    ~MessagesDialog();

private slots:
    void on_ReturnBtn_clicked();

private:
    Ui::MessagesDialog *ui;
};

#endif // MESSAGESDIALOG_H
