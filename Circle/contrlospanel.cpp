#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent ) : QWidget( parent )
{
    setFixedSize( CONTRLOS_PANEL_WIDTH, CONTRLOS_PANEL_HEIGHT );

    positionXLabel = new Label( this );
    positionXLabel->getLabel()->setText( "Position X" );

    controlsLayout->addWidget( positionXLabel->getLabel(), 0, 1 );

}

ContrlosPanel::~ContrlosPanel()
{

}

