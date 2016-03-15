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

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    window.setWindowTitle("lll");

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
    window.setLayout(layout);
/*
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(spinBox);
    vlayout->addWidget(slider);
    window.setLayout(vlayout);

    QGridLayout *glayout = new QGridLayout;
    glayout->addWidget(spinBox);
    glayout->addWidget(slider);
    window.setLayout(glayout);

    QFormLayout *flayout = new QFormLayout;
    flayout->addWidget(spinBox);
    flayout->addWidget(slider);
    window.setLayout(flayout);

    QStackedLayout *slayout = new QStackedLayout;
    slayout->addWidget(spinBox);
    slayout->addWidget(slider);
    window.setLayout(slayout);
*/




    window.show();
    return app.exec();
}
