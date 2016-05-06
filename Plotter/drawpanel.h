#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QPainter>
#include "lemniscate.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    explicit DrawPanel( QWidget *parent = 0, Lemniscate* newLemniscate = 0 );
    ~DrawPanel();
    void saveImage( QString fileString );
protected:
    void paintEvent( QPaintEvent *event );
private:
    Lemniscate* lemniscate;
};

#endif // DRAWWIDGET_H
