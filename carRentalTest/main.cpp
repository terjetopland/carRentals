#include "mainwindow.h"

#include <QApplication>

//Kommentar for å teste git
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
