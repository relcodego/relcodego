

#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QDialog>
#include <QDebug>

#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{

    setWindowTitle(tr("main window"));
    openAction = new QAction(QIcon(":/images/doc-open"),tr("&Open..."),this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("open an file"));
    connect(openAction,&QAction::triggered,this,&MainWindow::open);
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

}

MainWindow::~MainWindow()
{
}

void MainWindow::open()
{
    QDialog dialog;
    //QDialog dialog(this);
    dialog.setWindowTitle(tr("helllo,dialog:"));
    dialog.exec();
    qDebug() << dialog.result();
}
