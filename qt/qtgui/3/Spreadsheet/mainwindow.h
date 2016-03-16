#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

class QAction;
class QLabel;
class FindDialog;
class Spreadsheet;
class MainWindow:public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void newFile();
    void open();
    bool save();
    bool saveAs();
    void find();
    void goToCell();
    void sort();
    void about();
    void openRecentFile();
    void updateStatusBar();
    void spreadsheetModified();
private:
    void createActions();
    void createMenus();
    void createContextMenu();
    void createToolBars();
    void createStatusBar();
    void readSettings();
    void writeSettings();
    void okToContinue();
    void loadFile(const QString &fileName);
    void saveFile(const QString &fileName);
    void setCurrentFile(const QString &fileName);
    void updateRecentFileActions();
    QString strippedName(const QString &fullFileName);

    Spreadsheet *spreadsheet;
    FindDialog *findDialog;
    QLabel *locationLabel;
    QLabel *formulaLabel;
    QStringList recentFiles;
    QString curFile;

    enum { MaxRecentFiles = 5};
    QAction *recentFileActions[MaxRecentFiles],*separatorAction,*newAction,*openAction,*aboutQtAction;
    QMenu *fileMenu,*editMenu;

    QToolBar *fileToolBar,*editToolBar;
};


#endif // MAINWINDOW_H
