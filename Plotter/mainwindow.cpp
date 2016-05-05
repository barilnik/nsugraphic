#include "mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) : QMainWindow(parent)
{
    QWidget *widget = new QWidget( this );
    setCentralWidget( widget );

    lemnisccate = new Lemniscate();

    menu = new Menu( this, lemnisccate );

    QGridLayout *grid = new QGridLayout;
    grid->addWidget( createDrawPanel(), 0, 0, 4, 1 );
    grid->addWidget( createControlPanel(), 0, 2 );
    grid->setMargin( 10 );
    widget->setLayout( grid );


    setWindowTitle( tr( "Plotter" ) );
    resize( 800, 800 );

    //createMenus();
}

QGroupBox *MainWindow::createDrawPanel()
{
    QGroupBox *groupBox = new QGroupBox( tr( "Draw Panel" ) );
    drawPanel = new DrawPanel( this, lemnisccate );

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget( drawPanel );

    groupBox->setLayout( vbox );

    return groupBox;
}
QGroupBox *MainWindow::createControlPanel()
{
    QGroupBox *groupBox = new QGroupBox( tr( "Controls" ) );
    QGridLayout *grid = new QGridLayout( this );

    controlX1 = new GroupWidgets( this );
    controlX2 = new GroupWidgets( this );
    controlY1 = new GroupWidgets( this );
    controlY2 = new GroupWidgets( this );
    controlRadius = new GroupWidgets( this );

    controlX1->setDefaults( tr( "x1" ), -1000, 1000, -10 );
    controlX2->setDefaults( tr( "x2" ), -1000, 1000, 10 );
    controlY1->setDefaults( tr( "y1" ), -1000, 1000, 0 );
    controlY2->setDefaults( tr( "y2" ), -1000, 1000, 0 );
    controlRadius->setDefaults( tr( "r" ), 0, 1000, 10 );

    grid->addWidget( controlX1, 0, 0 );
    grid->addWidget( controlY1, 1, 0 );
    grid->addWidget( controlX2, 2, 0 );
    grid->addWidget( controlY2, 3, 0 );
    grid->addWidget( controlRadius, 4, 0 );

    groupBox->setFixedSize( 200, 400 );
    groupBox ->setLayout( grid );

    connect( controlX1, SIGNAL( valueChanged( int ) ), lemnisccate, SLOT( changeX1( int ) ) );
    connect( controlX2, SIGNAL( valueChanged( int ) ), lemnisccate, SLOT( changeX2( int ) ) );
    connect( controlY1, SIGNAL( valueChanged( int ) ), lemnisccate, SLOT( changeY1( int ) ) );
    connect( controlY2, SIGNAL( valueChanged( int ) ), lemnisccate, SLOT( changeY2( int ) ) );
    connect( controlRadius, SIGNAL( valueChanged( int ) ), lemnisccate, SLOT( changeRadius( int ) ) );

    connect( lemnisccate, SIGNAL( valueChangedX1( int ) ), controlX1, SLOT( setValue( int ) ) );
    connect( lemnisccate, SIGNAL( valueChangedX2( int ) ), controlX2, SLOT( setValue( int ) ) );
    connect( lemnisccate, SIGNAL( valueChangedY1( int ) ), controlY1, SLOT( setValue( int ) ) );
    connect( lemnisccate, SIGNAL( valueChangedY2( int ) ), controlY2, SLOT( setValue( int ) ) );
    connect( lemnisccate, SIGNAL( valueChangedRadius( int ) ), controlRadius, SLOT( setValue( int ) ) );

    return groupBox;
}

MainWindow::~MainWindow()
{

}
