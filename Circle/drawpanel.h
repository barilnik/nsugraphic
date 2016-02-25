#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QPaintEvent>

#include "circle.h"

class DrawPanel : public QWidget
{
	Q_OBJECT
public:
	explicit DrawPanel( QWidget *parent, Circle *circle );
	~DrawPanel();
protected:
	void paintEvent( QPaintEvent *event );
private:
	Circle *circle;
};

#endif // DRAWPANEL_H
