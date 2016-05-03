#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>

class getTime : public QDialog
{
    Q_OBJECT
    public:
        getTime(QWidget *parent=0);
        ~getTime();
    private:
        QLabel *label;
        QPushButton *button;

};

#endif
