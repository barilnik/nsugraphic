#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>
#include "imagecreator.h"

class DrawPanel : public QWidget
{
    Q_OBJECT
public:
    DrawPanel( ImageCreator *painter, QWidget *parent = 0 );
    ~DrawPanel();
private:
    ImageCreator *painter;
protected:
    void paintEvent(QPaintEvent *event);
public slots:
    void repaint();
};

#endif // DRAWPANEL_H
