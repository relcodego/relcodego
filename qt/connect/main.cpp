
#include <QApplication>
#include "connect.h"

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    getTime *gettime = new getTime;
    gettime->show()
        ;
    return app.exec();
    

}
