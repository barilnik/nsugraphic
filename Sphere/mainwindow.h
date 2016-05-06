#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QGroupBox>

#include "drawpanel.h"
#include "sphere.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow( QWidget *parent = 0 );
    ~MainWindow();

private:
    QGroupBox *createDrawPanel();
    DrawPanel *drawPanel;
    Sphere *sphere;
};

#endif // MAINWINDOW_H
