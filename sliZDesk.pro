#-------------------------------------------------
#
# Project created by QtCreator 2015-05-20T21:44:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sliZDesk
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        MainWindow.cpp \
    CPlate.cpp \
    CConfig.cpp \
    GLView.cpp

HEADERS  += MainWindow.h \
    CPlate.h \
    CConfig.h \
    GLView.h

FORMS    += MainWindow.ui

RESOURCES += \
    resurce.qrc
