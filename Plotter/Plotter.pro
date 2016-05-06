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
    drawpanel.cpp \
    controlpanel.cpp \
    file.cpp \
    groupwidgets.cpp \
    jsondocument.cpp \
    lemniscate.cpp

HEADERS  += mainwindow.h \
    menu.h \
    resource.h \
    drawpanel.h \
    controlpanel.h \
    lemniscate.h \
    file.h \
    groupwidgets.h \
    jsondocument.h

FORMS    += mainwindow.ui
