#ifndef CONTRLOSPANEL_H
#define CONTRLOSPANEL_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QGridLayout>
#include <QGroupBox>

class ContrlosPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ContrlosPanel( QWidget *parent = 0 );
    ~ContrlosPanel();
private:
    QLabel *positionXLabel;
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
};

#endif // CONTRLOSPANEL_H
