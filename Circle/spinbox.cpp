#include "spinbox.h"

SpinBox::SpinBox( QWidget *parent ) : QWidget( parent )
{
    spinBox = new QSpinBox( this );
    spinBox->setFixedSize( SPINBOX_SIZE_WIDTH, SPINBOX_SIZE_HEIGHT );
    spinBox->setGeometry( 0, 1 * SPINBOX_HEIGHT, SPINBOX_WIDTH, SPINBOX_HEIGHT );

    spinBox->setMaximum( MAX_COORD );
    spinBox->setMinimum( MIN_COORD );
    spinBox->setValue( DEFAULT_VALUE );
}
