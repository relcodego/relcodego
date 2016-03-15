
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>

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
    QToolBar *toolBar2 = addToolBar(tr("toolbar2"));

    toolBar2->addAction(openAction);

    QStatusBar *statusbar = statusBar();
    statusbar->addAction(openAction);
}

MainWindow::~MainWindow()
{

}

void MainWindow::open()
{
    QMessageBox::information(this,tr("Information"),tr("open"));
}
