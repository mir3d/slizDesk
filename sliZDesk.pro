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
DEFINES += _USE_MATH_DEFINES

SOURCES += main.cpp\
        MainWindow.cpp \
    CPlate.cpp \
    CConfig.cpp \
    CGLView.cpp \
    CGLViewEvenFilter.cpp

HEADERS  += \
    CConfig.hpp \
    CGLView.hpp \
    CGLViewEvenFilter.hpp \
    CPlate.hpp \
    MainWindow.hpp

FORMS    += MainWindow.ui

RESOURCES += \
    resurce.qrc
