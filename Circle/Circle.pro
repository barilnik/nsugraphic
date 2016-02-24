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
    drawpanel.cpp \
    controls.cpp \
    controllpanel.cpp \
    picturecreator.cpp

HEADERS  += mainwindow.h \
    drawpanel.h \
    controls.h \
    controllpanel.h \
    picturecreator.h

FORMS    += mainwindow.ui
