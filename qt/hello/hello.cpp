#include <QApplication>
#include <QLabel>


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QLabel *label=new QLabel("<h2><i>Helloworldjfs</i><font color=red>QT</font></h2>");
    label->resize(QSize( 200, 100 ));
    label->move(300,329);
    label->show();
    return app.exec();
}
