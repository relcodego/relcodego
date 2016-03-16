#include <QtGui>

#include "finddialog.h"
#include "gotocelldialog.h"
#include "mainwindow.h"
#include "sortdialog.h"
#include "spreadsheet.h"

MainWindow::MainWindow()
{
    spreadsheet = new Spreadsheet;
    setCentralWidget(spreadsheet);

    createActions();
    createMenus();
    createContextMenu();
    createToolBars();
    createStatusBar();
    readSettings();
    findDialog = 0;
    setWindowIcon(QIcon(":/images/1.jpg"));
    setCursorFile("");
}

void MainWindow::createActions(){
    newAction = new QAction(tr("&New"),this);
    newAction->setIcon(QIcon(":/images/1.jpg"));
    newAction->setShortcut(QKeySequence::New);
    newAction->setStatusTip(tr("create a file"));
    connect(newAction,SIGNAL(triggered()),this,SLOT(newFile()));


}
