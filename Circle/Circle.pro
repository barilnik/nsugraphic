#-------------------------------------------------
#
# Project created by QtCreator 2016-02-18T17:21:05
#
#-------------------------------------------------

QT       += core gui \
            testlib


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Circle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    drawpanel.cpp \
<<<<<<< HEAD
    controlspanel.cpp \
    circle.cpp
=======
    circle.cpp \
    contrloswidgets.cpp \
    jsondocument.cpp \
    file.cpp \
    test_circle.cpp
>>>>>>> circle

HEADERS  += mainwindow.h \
    menu.h \
    drawpanel.h \
<<<<<<< HEAD
    controlspanel.h \
    circle.h
=======
    circle.h \
    contrloswidgets.h \
    jsondocument.h \
    file.h \
    test_circle.h
>>>>>>> circle

FORMS    += mainwindow.ui
