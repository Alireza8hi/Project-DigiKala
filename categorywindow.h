#ifndef CATEGORYWINDOW_H
#define CATEGORYWINDOW_H

#include <QMainWindow>

namespace Ui {
class CategoryWindow;
}

class CategoryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CategoryWindow(QWidget *parent = nullptr);
    ~CategoryWindow();

private slots:
    void on_ReturnBtn_triggered();

    void on_EntertainmentBtn_clicked();

    void on_ElectronicsBtn_clicked();

    void on_HomeBtn_clicked();

    void on_ElectricBtn_clicked();

    void on_NonElectricBtn_clicked();

    void on_MainAccessoriesBtn_clicked();

    void on_SubAccessoriesBtn_clicked();

    void on_FurnitureBtn_clicked();

    void on_KitchenBtn_clicked();

    void on_HomeElectricBtn_clicked();

    void on_ClothesBtn_clicked();

    void on_StationeryBtn_clicked();

    void on_MusicBtn_clicked();

    void on_BookBtn_clicked();

    void on_MedicalBtn_clicked();

    void on_EdibleBtn_clicked();

    void on_BeautyAndPersonalCareBtn_clicked();

private:
    Ui::CategoryWindow *ui;
};

#endif // CATEGORYWINDOW_H
