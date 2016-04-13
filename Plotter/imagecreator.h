#ifndef IMAGECREATOR_H
#define IMAGECREATOR_H

#include <QWidget>

#include "shape.h"

class ImageCreator : public QWidget
{
    Q_OBJECT
public:
    explicit ImageCreator( Shape *shape, QWidget *parent = 0 );
    ~ImageCreator();
    QImage *paint( const int &pWidth, const int &pHeight );
private:
    Shape *shape;
signals:
    void startRepaint();
public slots:
    void repaint();
};

#endif // IMAGECREATOR_H
