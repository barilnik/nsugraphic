#ifndef SLIDER_H
#define SLIDER_H

#include <QWidget>
#include <QSlider>

#include <resource.h>

class Slider : public QWidget
{
    Q_OBJECT
public:
    Slider( QWidget *parent = 0 );
    QSlider *getSlider();
private:
    QSlider *slider;
};

#endif // SLIDER_H
