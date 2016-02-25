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
    panels.cpp \
    drawpanel.cpp \
    controlspanel.cpp \
    point.cpp \
    circle.cpp

HEADERS  += mainwindow.h \
    menu.h \
    panels.h \
    drawpanel.h \
    controlspanel.h \
    point.h \
    circle.h

FORMS    += mainwindow.ui
