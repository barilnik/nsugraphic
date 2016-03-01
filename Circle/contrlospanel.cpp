#include "contrlospanel.h"

ContrlosPanel::ContrlosPanel( QWidget *parent ) : QWidget( parent )
{
    setFixedSize( 200, 60 );

    controlBox = new QGroupBox;
    controlsLayout = new QGridLayout;

    positionXLabel = new QLabel( this );
    positionXLabel->setText( "Position X" );
    positionXLabel->setAlignment( Qt::AlignCenter );
    positionXLabel->setFixedSize( 200, 20 );
    positionXLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    positionXLabel->setGeometry( 0, 0 * 20, 200, 20);

    spinBox = new QSpinBox(this);
        spinBox->setFixedSize( 200, 20 );
        spinBox->setGeometry(0,
                             1 * 20,
                             200,
                             20);
   // controlsLayout->addWidget( positionXLabel );
    //controlBox->setLayout( controlsLayout );
}

ContrlosPanel::~ContrlosPanel()
{

}

