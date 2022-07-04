#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <ctime>
#include "Digikala.h"
#include "profiledialog.h"

using namespace std;

   time_t now = time(0);
   tm *ltm = localtime(&now);

int main(int argc, char *argv[])
{
    ltm->tm_year+=1900;
    ltm->tm_mon+=1;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ProfileDialog sss;
    sss.show();
    return a.exec();
}
