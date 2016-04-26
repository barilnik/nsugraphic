#include "controlpanel.h"

ControlPanel::ControlPanel( QWidget *parent ) : QWidget( parent )
{
    label = new QLabel( this );
    spinBox = new QSpinBox( this );
    slider = new QSlider( Qt::Horizontal, this );
    label->setAlignment( Qt::AlignCenter );

    connect( slider, SIGNAL( valueChanged( int ) ), spinBox, SLOT( setValue( int ) ) );
    connect( spinBox, SIGNAL( valueChanged( int ) ), slider, SLOT( setValue( int ) ) );
    connect( slider, SIGNAL( valueChanged( int ) ), this, SIGNAL( valueChanged( int ) ) );

    QGridLayout *grid = new QGridLayout( this );
    grid->addWidget( label, 0, 0 );
    grid->addWidget( spinBox, 1, 0 );
    grid->addWidget( slider, 2, 0 );

    setLayout( grid );
}

void ControlPanel::setValue( int value )
{
    spinBox->setValue( value );
    slider->setValue( value );
}
int ControlPanel::getValue()
{
    return slider->value();
}
void ControlPanel::setDefaults( QString titleText, int minValue,int maxValue, int defaultValue )
{
    label->setText( titleText );

    spinBox->setMaximum( maxValue );
    spinBox->setMinimum( minValue );
    spinBox->setValue( defaultValue );

    slider->setMaximum( maxValue );
    slider->setMinimum( minValue );
    slider->setValue( defaultValue );
}
