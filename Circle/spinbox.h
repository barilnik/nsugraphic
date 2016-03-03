#ifndef SPINBOX_H
#define SPINBOX_H

#include <QWidget>
#include <QSpinBox>

#include <resource.h>

class SpinBox : public QWidget
{
    Q_OBJECT
public:
    SpinBox( QWidget *parent = 0);
    QSpinBox getSpinBox();
    QSpinBox spinBox;
};

#endif // SPINBOX_H
