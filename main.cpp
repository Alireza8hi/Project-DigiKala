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
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
<<<<<<< HEAD
=======

    //
    //

>>>>>>> 9925a52efd4a9ec3faf71b267a336e126b2fd3c0
    return a.exec();
}
