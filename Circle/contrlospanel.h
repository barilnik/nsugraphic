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

class ContrlosPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ContrlosPanel( QWidget *parent = 0 );
    ~ContrlosPanel();
private:
    //QLabel *positionXLabel;
    QLabel *positionYLabel;
    QLabel *rLabel;
    QSpinBox *positionXSpinBox;
    QSpinBox *positionYSpinBox;
    QSpinBox *rSpinBox;
    QSlider *positionXSlider;
    QSlider *positionYSlider;
    QSlider *rSlider;
    QGridLayout *controlsLayout;
    QGroupBox *controlBox;
    QSpinBox *spinBox;
    Label *positionXLabel;
};

#endif // CONTRLOSPANEL_H
