#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QtCore/QCoreApplication>

#include <QPushButton>

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent )
{
    menu = new Menu( this );
    controlsPanel = new ContrlosPanel( this );

    mainLayout = new QGridLayout( this );
    controlsPanelLayout = new QGridLayout( this );
    controlsPanelBoxLayout = new QGroupBox( tr("Controls"), this );

    controlsPanelLayout->addWidget( controlsPanel );
    controlsPanelBoxLayout->setLayout( controlsPanelLayout );
    mainLayout->addWidget( controlsPanelBoxLayout, 0, 1 );

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

