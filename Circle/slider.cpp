#include "slider.h"

Slider::Slider( QWidget *parent ) : QWidget( parent )
{
    slider = new QSlider( Qt::Horizontal, this );
    slider->setFixedSize( SLIDER_SIZE_WIDTH, SLIDER_SIZE_HEIGHT );
    slider->setGeometry( 0, 2 * SLIDER_HEIGHT, SLIDER_WIDTH,  SLIDER_HEIGHT );
}

QSlider *getSlider()
{
    return slider;
}
