#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QSpinBox>
#include <QObject>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QFormLayout>
#include <QStackedLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    window.setWindowTitle("lll");

    //1.1
    QLabel * label = new QLabel("di yi zhang ");

    //1.2
    QPushButton *button = new QPushButton("quit");
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));

    //1.3
    QSpinBox *spinBox = new QSpinBox(&window);
    QSlider *slider = new QSlider(Qt::Horizontal,&window);
    spinBox->setRange(0,123);
    slider->setRange(0,123);
    QObject::connect(slider,&QSlider::valueChanged,spinBox,&QSpinBox::setValue);
    void (QSpinBox::*spinBoxSignal)(int) = &QSpinBox::valueChanged;
    QObject::connect(spinBox,spinBoxSignal,slider,&QSlider::setValue);
    spinBox->setValue(0);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    layout->addWidget(label);
    layout->addWidget(button);
    window.setLayout(layout);

    window.show();
    return app.exec();
}
