#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>
#include <QString>

#include "resource.h"

class Label : public QWidget
{
    Q_OBJECT
public:
    Label( QString labelText, QWidget *parent = 0 );
    QLabel getLabel();

    QLabel *label;
};

#endif // LABEL_H
