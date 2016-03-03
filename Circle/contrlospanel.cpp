#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent ) : QWidget( parent )
{
    setFixedSize( CONTRLOS_PANEL_WIDTH, CONTRLOS_PANEL_HEIGHT );

    positionXLabel = new Label( "Position X:" , this );
    //positionXLabel->getLabel()->setText( );
    controlsLayout->addWidget( positionXLabel->getLabel(), 1, 1 );

    positionXSpinBox = new SpinBox( this );
    controlsLayout->addWidget( positionXSpinBox->getSpinBox(), 1, 2 );

    positionXSlider = new Slider( this );
    controlsLayout->addWidget( positionXSlider->getSlider(), 2, 0 );


    positionYLabel = new Label( "Position Y:" , this );
    controlsLayout->addWidget( positionYLabel->getLabel(), 3, 1 );

    positionYSpinBox = new SpinBox( this );
    controlsLayout->addWidget( positionYSpinBox->getSpinBox(), 3, 2 );

    positionYSlider = new Slider( this );
    controlsLayout->addWidget( positionYSlider->getSlider(), 4, 0 );


    rLabel = new Label( "R:" , this );
    controlsLayout->addWidget( rLabel->getLabel(), 5, 1 );

    rSpinBox = new SpinBox( this );
    controlsLayout->addWidget( rSpinBox->getSpinBox(), 5, 2 ); //TODO: нужно установить 10 по дефолту

    rSlider = new Slider( this );
    controlsLayout->addWidget( rSlider->getSlider(), 6, 0 );
}

ContrlosPanel::~ContrlosPanel()
{

}

