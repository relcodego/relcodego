

#include "connect.h"

getTime::getTime(QWidget *parent)
    : QDialog(parent)
{
    this->resize(300,400);
    label = new QLabel("label",this);
    button = new QPushButton("dfsl",this);
    label->move(150,200);
    button->move(120,300);
    connect(button,SIGNAL(clicked()),label,SLOT(close()));


}
getTime::~getTime(){}
