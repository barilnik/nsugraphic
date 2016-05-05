#-------------------------------------------------
#
# Project created by QtCreator 2016-05-04T20:13:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sphere
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drawpanel.cpp \
    controlspanel.cpp \
    sphere.cpp \
    groupwidgets.cpp

HEADERS  += mainwindow.h \
    drawpanel.h \
    controlspanel.h \
    sphere.h \
    groupwidgets.h

FORMS    += mainwindow.ui
