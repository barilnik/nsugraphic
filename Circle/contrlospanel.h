#ifndef CONTRLOSPANEL_H
#define CONTRLOSPANEL_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QGridLayout>
#include <QGroupBox>
#include <QSpinBox>

#include "resource.h"
#include "label.h"
#include "spinbox.h"
#include "slider.h"

class ContrlosPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ContrlosPanel( QWidget *parent = 0 );
    ~ContrlosPanel();
private:
    //QLabel *positionXLabel;
    Label *positionXLabel;
    Label *positionYLabel;
    Label *rLabel;
    SpinBox *positionXSpinBox;
    SpinBox *positionYSpinBox;
    SpinBox *rSpinBox;
    Slider *positionXSlider;
    Slider *positionYSlider;
    Slider *rSlider;
    QGridLayout *controlsLayout;
    QGroupBox *controlBox;

};

#endif // CONTRLOSPANEL_H
