#-------------------------------------------------
#
# Project created by QtCreator 2016-03-28T16:39:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Plotter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bernoullilemniscate.cpp \
    drawpanel.cpp \
    controlspanel.cpp \
    jsondocument.cpp \
    menu.cpp \
    controls.cpp \
    imagecreator.cpp

HEADERS  += mainwindow.h \
    bernoullilemniscate.h \
    drawpanel.h \
    controlspanel.h \
    jsondocument.h \
    menu.h \
    controls.h \
    resource.h \
    imagecreator.h \
    shape.h

FORMS    += mainwindow.ui
