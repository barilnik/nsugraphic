#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>

#include "lemniscateofbernoulli.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    explicit DrawPanel( QWidget *parent = 0, LemniscateOfBernoulli *newLemniscate = 0);
protected:
    void paintEvent( QPaintEvent *event );
private:
    LemniscateOfBernoulli *lemniscate;
    //int drafType;
};

#endif // DRAWPANEL_H
