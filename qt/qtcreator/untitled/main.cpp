#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QLabel *laber = new QLabel("Helosfa world");
   // (*laber).show();
    laber->show();
    return a.exec();
}
