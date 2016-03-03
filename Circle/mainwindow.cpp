#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QtCore/QCoreApplication>

#include <QPushButton>

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent )
{
    circle = new Circle();

    menu = new Menu( this );
    controlsPanel = new ContrlosPanel( this );
    drawPanel = new DrawPanel( NULL, circle );

    mainLayout = new QGridLayout( this );

    drawPanelLayout = new QGridLayout( this );
    drawPanelBoxLayout = new QGroupBox( tr( "Draw Panel" ), this );

    controlsPanelLayout = new QGridLayout( this );
    controlsPanelBoxLayout = new QGroupBox( tr( "Controls" ), this );

    drawPanelLayout->addWidget( drawPanel );
    drawPanelBoxLayout->setLayout( drawPanelLayout );

    controlsPanelLayout->addWidget( controlsPanel );
    controlsPanelBoxLayout->setLayout( controlsPanelLayout );

    mainLayout->addWidget( drawPanelBoxLayout, 1, 1 );
    mainLayout->addWidget( controlsPanelBoxLayout, 1, 2 );

    setLayout( mainLayout );
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

