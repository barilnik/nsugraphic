#include "groupwidgets.h"

GroupWidgets::GroupWidgets( QWidget *parent ) : QWidget( parent )
{
    title = new QLabel(this);
    title->setFixedSize( 50, 20 );
    title->setAlignment( Qt::AlignCenter );

    spinBox = new QSpinBox( this );
    spinBox->setFixedSize( 50, 20 );

    slider = new QSlider( Qt::Horizontal, this );
    slider->setFixedSize( 200, 20 );


    connect( slider, SIGNAL( valueChanged( int ) ), spinBox, SLOT( setValue( int ) ) );
    connect( spinBox, SIGNAL (valueChanged (int ) ), slider, SLOT( setValue( int ) ) );
    connect( slider, SIGNAL( valueChanged( int ) ), this, SIGNAL( valueChanged( int ) ) );

    QGridLayout *grid = new QGridLayout( this );
    grid->addWidget( title, 0, 0 );
    grid->addWidget( spinBox, 1, 0 );
    grid->addWidget( slider, 2, 0 );

    setLayout( grid );
}

GroupWidgets::~GroupWidgets()
{

}
void GroupWidgets::setValue( int value )
{
    spinBox->setValue( value );
    slider->setValue( value );
}

int GroupWidgets::getValueSlider()
{
    return slider->value();
}

int GroupWidgets::getValueSpinBox()
{
    return spinBox->value();
}

void GroupWidgets::setDefaults( QString titleText, int minValue,int maxValue, int defaultValue )
{
    title->setText( titleText );

    spinBox->setMaximum( maxValue );
    spinBox->setMinimum( minValue );
    spinBox->setValue( defaultValue );

    slider->setMaximum( maxValue );
    slider->setMinimum( minValue );
    slider->setValue( defaultValue );
}
