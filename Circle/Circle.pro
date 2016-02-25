#-------------------------------------------------
#
# Project created by QtCreator 2016-02-18T17:21:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Circle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    drawpanel.cpp \
    controlspanel.cpp \
    circle.cpp

HEADERS  += mainwindow.h \
    menu.h \
    drawpanel.h \
    controlspanel.h \
    circle.h

FORMS    += mainwindow.ui
