#ifndef  GOTOCELLDIALOG_H
#define  GOTOCELLDIALOG_H

#include <QDialog>

#include "ui_gotocelldialog.h"

class GoToCellDialog: public QDialog,public Ui_GoToCellDialog
{
    Q_OBJECT
public:
    GoToCellDialog(QWidget *parent=0);
private slots:
    void on_lineEdit_textChanged();
};

#endif // UI_GOTOCELLDIALOG_H
