#ifndef CONTROLS_H
#define CONTROLS_H

#include <QWidget>
#include <QLabel>
#include <QSlider>
#include <QSpinBox>
#include <QGridLayout>

#include "resource.h"

class Controls : public QWidget
{
    Q_OBJECT
public:
    explicit Controls( QWidget *parent = 0 );
    void init( QString labelText, int minValue, int maxValue, int defaultValue );

private:
    QLabel *label;
    QSpinBox *spinBox;
    QSlider *slider;
    QGridLayout *layout;

Q_SIGNALS:
    void valueChanged( int value );
};

#endif // CONTROLS_H
