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

    void CheckForOk();
private slots:
    void on_ReturnBtn_clicked();

    void on_ConfirmAndReturnBtn_clicked();

    void on_OwnerLe_textChanged(const QString &arg1);

    void on_OwnerPhoneNumber_textChanged(const QString &arg1);

    void on_NumberLe_textChanged(const QString &arg1);

    void on_NameLe_textChanged(const QString &arg1);

    void on_CategoryCombo_currentIndexChanged(int index);

    void on_TypeLe_textChanged(const QString &arg1);

    void on_CompanyLe_textChanged(const QString &arg1);

    void on_CityLe_textChanged(const QString &arg1);

    void on_AddressLe_textChanged(const QString &arg1);

    void on_CostLe_textChanged(const QString &arg1);

    void on_NumOfSellLe_textChanged(const QString &arg1);

    void on_DiscountPercentLe_textChanged(const QString &arg1);

    void on_ColorLe_textChanged(const QString &arg1);

    void on_DescriptionLe_textChanged(const QString &arg1);

    void on_WeightLe_textChanged(const QString &arg1);

    void on_VolumeLe_textChanged(const QString &arg1);

    void on_ProfitPercentLe_textChanged(const QString &arg1);

private:
    Ui::EditCommodityDialog *ui;
};

#endif // EDITCOMMODITYDIALOG_H
