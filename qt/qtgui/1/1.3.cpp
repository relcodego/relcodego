
#include <QApplication>
#include <QHBoxLayout>
#include <QWidget>
#include <QSpinBox>
#include <QSlider>
#include <QObject>


int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    
    QWidget *window = new QWidget;
    window->setWindowTitle("biaoti");

    QSpinBox *spinbox =new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinbox->setRange(0,123);
    slider->setRange(0,123);
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));
    spinbox->setValue(1); //init
    QHBoxLayout  *hlayout = new QHBoxLayout;
    hlayout->addWidget(spinbox);
    hlayout->addWidget(slider);
    window->setLayout(hlayout);
    window->show();
    return app.exec();

}
