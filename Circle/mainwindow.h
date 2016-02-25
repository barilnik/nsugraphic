#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QWidget>

#include "controlspanel.h"
#include "drawpanel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget *parent = 0 );
    ~MainWindow();
private slots:
	void save();
	void load();
private:
	QAction *saveAction;
	QAction *loadAction;
	QGridLayout *mainLayout;
	ControlsPanel *controlsPanel;
	DrawPanel *drawPanel;
};

#endif // MAINWINDOW_H
