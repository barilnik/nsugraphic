#ifndef FILE_H
#define FILE_H

#include "QImage"

#include "circle.h"
#include "drawpanel.h"

class File : public QWidget
{
    Q_OBJECT
public:
    File( QWidget *parent, Circle *circle);
    void saveImage( QString fileString );
private:
    QImage *image;
    DrawPanel *drawPanel;
    Circle *circle;
};

#endif // FILE_H
