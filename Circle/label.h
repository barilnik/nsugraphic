#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>

#include "resource.h"

class Label : public QWidget
{
    Q_OBJECT
public:
    Label( QWidget *parent = 0 );
    QLabel *getLabel();
private:
    QLabel *label;
};

#endif // LABEL_H
