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
    menu.cpp \
    lemniscateofbernoulli.cpp \
    drawpanel.cpp \
    controlpanel.cpp

HEADERS  += mainwindow.h \
    menu.h \
    resource.h \
    drawpanel.h \
    controlpanel.h \
    lemniscate.h

FORMS    += mainwindow.ui
