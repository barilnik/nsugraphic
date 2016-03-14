#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QtCore/QCoreApplication>

#include <QPushButton>

MainWindow::MainWindow( QWidget *parent ) : QMainWindow( parent ),
    widgetForX( new ContrlosWidgets( this ) ),
    widgetForY( new ContrlosWidgets( this ) ),
    widgetForR( new ContrlosWidgets( this ) )
{
    QWidget *widget = new QWidget( this );

    circle = new Circle( this );
    menu = new Menu( this, circle );
   // controlsPanel = new ContrlosPanel( this );
    drawPanel = new DrawPanel( this, circle );

    setCentralWidget( widget );

    mainLayout = new QGridLayout( widget );
    mainLayout->setMargin( 10 );

   /* drawPanelLayout = new QGridLayout( this );
    drawPanelBoxLayout = new QGroupBox( tr( "Draw Panel" ), this );

    controlsPanelLayout = new QGridLayout( this );
    controlsPanelBoxLayout = new QGroupBox( tr( "Controls" ), this );
*/
    widgetForX->init( QString( LABEL_NAME_X ), -MAX_COORD, MAX_COORD, DEFAULT_X);
    widgetForY->init( QString( LABEL_NAME_Y ), -MAX_COORD, MAX_COORD  , DEFAULT_Y );
    widgetForR->init( QString( LABEL_NAME_R ), MIN_RADIUS, MAX_RADIUS, DEFAULT_RADIUS );

    mainLayout->addWidget( drawPanel, 0, 0, 4, 1 );
    mainLayout->addWidget( widgetForX, 0, 1 );
    mainLayout->addWidget( widgetForY, 1, 1 );
    mainLayout->addWidget( widgetForR, 2, 1 );

    /*
    drawPanelLayout->addWidget( drawPanel );
    drawPanelBoxLayout->setLayout( drawPanelLayout );

    controlsPanelLayout->addWidget( controlsPanel );
    controlsPanelBoxLayout->setLayout( controlsPanelLayout );

    mainLayout->addWidget( drawPanelBoxLayout, 1, 1 );
    mainLayout->addWidget( controlsPanelBoxLayout, 1, 2 );
*/
    setLayout( mainLayout );
    resize( 800, 600 );

    connect(circle, SIGNAL( valueChanged( int ) ), this->drawPanel, SLOT( repaint() ) );

    connect( widgetForX, SIGNAL( valueChanged( int ) ), circle, SLOT( setPositionX( int ) ) );
    connect( widgetForY, SIGNAL( valueChanged( int ) ), circle, SLOT (setPositionY( int ) ) );
    connect( widgetForR, SIGNAL( valueChanged( int ) ), circle, SLOT( setRadius( int ) ) );
}

MainWindow::~MainWindow()
{

}


