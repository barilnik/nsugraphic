#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent, Circle *circle ) : QWidget( parent )//, circle( circle )
{
  /*  this->circle = circle;
    widgetForX = new ContrlosWidgets( this );
    widgetForY = new ContrlosWidgets( this );
    widgetForR = new ContrlosWidgets( this );

    widgetForX->init( QString( LABEL_NAME_X ), -MAX_COORD, MAX_COORD, DEFAULT_X);
    widgetForY->init( QString( LABEL_NAME_Y ), -MAX_COORD, MAX_COORD, DEFAULT_Y );
    widgetForR->init( QString( LABEL_NAME_R ), MIN_RADIUS, MAX_RADIUS, DEFAULT_RADIUS );

    controlsLayout->addWidget( widgetForX, 0, 1 );
    controlsLayout->addWidget( widgetForY, 1, 1 );
    controlsLayout->addWidget( widgetForR, 2, 1 );

    connect( widgetForX, SIGNAL( valueChanged( int ) ), this->circle, SLOT( setPositionX( int ) ) );
    connect( widgetForY, SIGNAL( valueChanged( int ) ), this->circle, SLOT( setPositionY( int ) ) );
    connect( widgetForR, SIGNAL( valueChanged( int ) ), this->circle, SLOT( setRadius( int ) ) );
*/
  /* TODO: умереть, но доделать это решение!
    //QWidget *widget = new QWidget( this );
    setFixedSize( CONTRLOS_PANEL_WIDTH, CONTRLOS_PANEL_HEIGHT );

    QObject *positionXLabel = new Label( "Position X:" , this );
    QWidget *widget = qobject_cast<QWidget *>( positionXLabel );
    //positionXLabel->getLabel()->setText( );
    controlsLayout->addWidget( qobject_cast<QWidget*>( widget ), 1, 1 );

    positionXSpinBox = new SpinBox( widget );
    controlsLayout->addWidget( positionXSpinBox->spinBox, 1, 2 );

    positionXSlider = new Slider( widget );
    controlsLayout->addWidget( positionXSlider->slider, 2, 0 );


    positionYLabel = new Label( "Position Y:" , widget );
    controlsLayout->addWidget( positionYLabel->label, 3, 1 );

    positionYSpinBox = new SpinBox( widget );
    controlsLayout->addWidget( positionYSpinBox->spinBox, 3, 2 );

    positionYSlider = new Slider( widget );
    controlsLayout->addWidget( positionYSlider->slider, 4, 0 );


    rLabel = new Label( "R:" , widget );
    controlsLayout->addWidget( rLabel->label, 5, 1 );

    rSpinBox = new SpinBox( widget );
    controlsLayout->addWidget( rSpinBox->spinBox, 5, 2 ); //TODO: нужно установить 10 по дефолту

    rSlider = new Slider( widget );
    controlsLayout->addWidget( rSlider->slider, 6, 0 );

    setLayout( controlsLayout );
    */
}

ContrlosPanel::~ContrlosPanel()
{

}

