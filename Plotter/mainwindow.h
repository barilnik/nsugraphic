#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QGroupBox>
#include "lemniscate.h"
#include "drawpanel.h"
#include "groupwidgets.h"
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

#include "menu.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget *parent = 0 );
    ~MainWindow();

private:
    QGroupBox *createDrawPanel();
    QGroupBox *createControlPanel();

    Lemniscate* lemnisccate;
    DrawPanel *drawPanel;
    GroupWidgets *controlX1;
    GroupWidgets *controlX2;
    GroupWidgets *controlY1;
    GroupWidgets *controlY2;
    GroupWidgets *controlRadius;

    Menu *menu;

    QMenu *fileMenu;
    QAction *openAct;
    QAction *saveAct;

    void createMenus();
/*
private slots:
    void open();
    void save();*/
};

#endif // MAINWINDOW_H
