#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>

#include "circle.h"

class DrawPanel : public QWidget
{
public:
	DrawPanel( QWidget *parent = 0, Circle *circle );
	~DrawPanel();
protected:
	void paintEvent( QPaintEvent *event );
private:
	QPainter *painter;
	Circle *circle;
};

#endif // DRAWPANEL_H
