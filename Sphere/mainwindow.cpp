#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QWidget *widget = new QWidget( this );
    setCentralWidget( widget );

    QGridLayout *grid = new QGridLayout;
    grid->addWidget( createDrawPanel(), 0, 0, 4, 1 );
    grid->setMargin( 10 );
    widget->setLayout( grid );

    setWindowTitle( tr( "Sphere" ) );
    resize( 800, 800 );
}

QGroupBox *MainWindow::createDrawPanel()
{
    QGroupBox *groupBox = new QGroupBox( tr( "Draw Panel" ) );
    drawPanel = new DrawPanel( this, sphere );

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget( drawPanel );

    groupBox->setLayout( vbox );

    return groupBox;
}

MainWindow::~MainWindow()
{
}
