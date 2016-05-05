#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};*/
#include <QMainWindow>
#include <QGridLayout>
#include <QGroupBox>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

#include "lemniscate.h"
#include "controlpanel.h"
#include "drawpanel.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QGroupBox *createFirstExclusiveGroup();
    QGroupBox *createSecondExclusiveGroup();

    LemniscateOfBernoulli *lemniscate;
    DrawPanel *drawPanel;
    ControlPanel *valueX1;
    ControlPanel *valueX2;
    ControlPanel *valueY1;
    ControlPanel *valueY2;
    ControlPanel *valueR;

    QMenu *fileMenu;
    QAction *openAct;
    QAction *saveAct;

    void createMenus();
signals:
    void dataChanged(QMap<QString, QString> map);
public slots:
    void save();
    void load();
};


#endif // MAINWINDOW_H
