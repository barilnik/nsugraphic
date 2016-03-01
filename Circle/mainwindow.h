#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QWidget>

#include "menu.h"

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
    Menu *menu;
};

#endif // MAINWINDOW_H
