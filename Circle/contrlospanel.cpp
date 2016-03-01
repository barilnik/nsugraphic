#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent ) : QWidget( parent )
{
    controlBox = new QGroupBox;
    controlsLayout = new QGridLayout;

    positionXLabel = new QLabel( this );
    positionXLabel->setText( "Position X" );
    positionXLabel->setAlignment( Qt::AlignCenter );
    positionXLabel->setFixedSize( 200, 400 );
    positionXLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);

   // controlsLayout->addWidget( positionXLabel );
    //controlBox->setLayout( controlsLayout );
}

ContrlosPanel::~ContrlosPanel()
{

}

