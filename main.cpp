#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include "Digikala.h"
#include "profiledialog.h"

using namespace std;

extern DigiKala site;
//extern DataBaseUser data_base_user[1000];

int main(int argc, char *argv[])
{

    site.read_digi_kala("DataBase.data",0);


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
