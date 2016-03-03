#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent ) : QWidget( parent )
{
    QWidget *widget = new QWidget( this );
    setFixedSize( CONTRLOS_PANEL_WIDTH, CONTRLOS_PANEL_HEIGHT );

    positionXLabel = new Label( "Position X:" , widget );
    //positionXLabel->getLabel()->setText( );
    controlsLayout->addWidget( positionXLabel->label, 1, 1 );

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
}

ContrlosPanel::~ContrlosPanel()
{

}

