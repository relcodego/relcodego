#-------------------------------------------------
#
# Project created by QtCreator 2016-01-28T13:37:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hellotest
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    1main.cpp \
    main.cpp

HEADERS  += mainwindow.h \
    newspaper.h \
    reader.h

QMAKE_CXXFLAGS += -std=c++0x
