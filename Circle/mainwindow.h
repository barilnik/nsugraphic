#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QGroupBox>
#include <QWidget>

#include "menu.h"
//#include "contrlospanel.h"
#include "contrloswidgets.h"
#include "drawpanel.h"
#include "circle.h"
#include "resource.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow( QWidget *parent = 0 );
    ~MainWindow();
    void setSize( int width, int height );
private:
	QGridLayout *mainLayout;
    QGroupBox *controlsPanelBoxLayout;
    QGroupBox *drawPanelBoxLayout;
    QGridLayout *controlsPanelLayout;
    QGridLayout *drawPanelLayout;

    Menu *menu;

    //ContrlosPanel *controlsPanel;
    ContrlosWidgets *widgetForX;
    ContrlosWidgets *widgetForY;
    ContrlosWidgets *widgetForR;

    DrawPanel *drawPanel;
    Circle *circle;

    int width = DEFAULT_WIDTH;
    int height = DEFAULT_HEIGHT;

};

#endif // MAINWINDOW_H
