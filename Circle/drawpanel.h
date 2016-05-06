#ifndef DRAWPANEL_H
#define DRAWPANEL_H

#include <QWidget>
#include <QPainter>
#include <QImage>
<<<<<<< HEAD
#include <QPaintEvent>
=======
>>>>>>> circle

#include "circle.h"

class DrawPanel : public QWidget
{
	Q_OBJECT
public:
<<<<<<< HEAD
	explicit DrawPanel( QWidget *parent, Circle *circle );
	~DrawPanel();
protected:
	void paintEvent( QPaintEvent *event );
private:
	Circle *circle;
=======
    explicit DrawPanel( QWidget *parent, Circle *circle );
    void setSizePanel( int width, int height );
    QImage getImage();
    void saveImage(QString filestring);
protected:
    void paintEvent( QPaintEvent *event );
private:
    Circle *m_pCircle;
    QImage *backBuffer;
>>>>>>> circle
};

#endif // DRAWPANEL_H
