#include "mainwindow.h"
#include "MainAdminWindow.h"
#include <iostream>
#include <QApplication>
#include "Digikala.h"
#include "profiledialog.h"
#include "searchdialog.h"

using namespace std;

extern DigiKala site;
//extern DataBaseUser data_base_user[1000];

int main(int argc, char *argv[])
{
    site.read_digi_kala("DataBase.data",0);
    site.get_commodity(0).set_is_confirm(true);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
