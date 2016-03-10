#ifndef CONTRLOSWIDGETS_H
#define CONTRLOSWIDGETS_H

#include <QWidget>
#include <QString>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QGridLayout>
#include <QGroupBox>

#include "resource.h"

class ContrlosWidgets : public QWidget
{
    Q_OBJECT
public:
    explicit ContrlosWidgets( QWidget *parent = 0 );
    void init( QString labelText, int minValue, int maxValue, int defaultValue );
    void setValue( int value );
    int getValue();
private:
    QLabel *label;
    QSpinBox *spinBox;
    QSlider *slider;
    QGridLayout *layout;
    QGroupBox *boxLayout;

Q_SIGNALS:
    void valueChanged( int value );
};

#endif // CONTRLOSWIDGETS_H
