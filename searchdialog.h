#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

private slots:

    void on_ReturnBtn_clicked();

    void on_ShowOptionsBtn_clicked();

    void on_ExitBtn_clicked();

    void on_SearchBtn_clicked();

private:
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
