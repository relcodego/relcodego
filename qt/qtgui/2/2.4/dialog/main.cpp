#include <QApplication>

#include <QColorDialog>

#include "sortdialog.h"

int main(int argc,char*argv[])
{
    QApplication app(argc,argv);
    SortDialog * dialog= new SortDialog;
    dialog->setColumnRange('C','F');
    dialog->show();
/*
    QColorDialog *a = new QColorDialog;
    a->show();
*/
    return app.exec();
}
