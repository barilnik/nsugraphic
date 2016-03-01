#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent )
{
    menu = new Menu( this );
}

MainWindow::~MainWindow()
{

}

void MainWindow::save()
{
	//Save File
}

void MainWindow::load()
{
	//Load File
}

