#include "mainwindow.h"
#include "MainAdminWindow.h"
#include <iostream>
#include <QApplication>
#include "Digikala.h"
#include "profiledialog.h"
#include "searchdialog.h"

using namespace std;

extern DigiKala site;

int main(int argc, char *argv[])
{
    site.read_digi_kala("DataBase.data",0);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
