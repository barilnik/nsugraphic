#include "contrloswidgets.h"

ContrlosWidgets::ContrlosWidgets( QWidget *parent ) : QWidget( parent )
{
    setFixedSize( CONTRLOS_WIDGETS_WIDTH, 3 * CONTRLOS_WIDGETS_HEIGHT );

    label = new QLabel( this );
    spinBox = new QSpinBox( this );
    slider = new QSlider( Qt::Horizontal, this );

    label->setAlignment( Qt::AlignCenter );
    label->setFixedSize( LABEL_WIDTH, LABEL_HEIGHT );
    label->setGeometry(0, 0 * LABEL_HEIGHT, LABEL_WIDTH, LABEL_HEIGHT );

    spinBox->setFixedSize( SPINBOX_SIZE_WIDTH, SPINBOX_SIZE_HEIGHT );
    spinBox->setGeometry( 0, 1 * SPINBOX_HEIGHT, SPINBOX_WIDTH, SPINBOX_HEIGHT );

    slider->setFixedSize( SLIDER_SIZE_WIDTH, SLIDER_SIZE_HEIGHT );
    slider->setGeometry( 0, 2 * SLIDER_HEIGHT, SLIDER_WIDTH,  SLIDER_HEIGHT );

    layout = new QGridLayout( this );
   // boxLayout = new QGroupBox( tr( "Contrlos" ), this );

    layout->addWidget( label, 1, 1 );
    layout->addWidget( spinBox, 1, 2 );
    layout->addWidget( slider, 2, 1 );

   // boxLayout->setLayout( layout );
    //setLayout( layout );

    connect(slider,  SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
    connect(spinBox, SIGNAL(valueChanged(int)), slider,  SLOT(setValue(int)));
    connect(slider,  SIGNAL(valueChanged(int)), this,    SIGNAL(valueChanged(int)));
}

void ContrlosWidgets::init( QString labelText, int minValue, int maxValue, int defaultValue )
{
    label->setText( labelText );

    spinBox->setMaximum( maxValue );
    spinBox->setMinimum( minValue );
    spinBox->setValue( defaultValue );

    slider->setMaximum( maxValue );
    slider->setMinimum( minValue );
    slider->setValue( defaultValue );
}
