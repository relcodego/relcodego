#include <QApplication>
#include <QLabel>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QLabel hello("hello world !");
    hello.show();
    return app.exec();
}
