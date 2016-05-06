#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QWidget>

#include "controlspanel.h"
#include "drawpanel.h"
<<<<<<< HEAD
=======
#include "circle.h"
#include "resource.h"
>>>>>>> circle

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget *parent = 0 );
    ~MainWindow();
<<<<<<< HEAD
private slots:
	void save();
	void load();
=======
    void setSize( int width, int height );
>>>>>>> circle
private:
	QAction *saveAction;
	QAction *loadAction;
	QGridLayout *mainLayout;
<<<<<<< HEAD
	ControlsPanel *controlsPanel;
	DrawPanel *drawPanel;
=======
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

>>>>>>> circle
};

#endif // MAINWINDOW_H
