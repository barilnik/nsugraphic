#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QGroupBox>
#include <QWidget>

#include "menu.h"
#include "contrlospanel.h"
//#include "board.h"

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
	QGridLayout *mainLayout;
    QGroupBox *controlsPanelBoxLayout;
    QGridLayout *controlsPanelLayout;
    Menu *menu;
    ContrlosPanel *controlsPanel;
    //Board *board;
};

#endif // MAINWINDOW_H
