#ifndef FILE_H
#define FILE_H

#include <QImage>

#include "drawpanel.h"
#include "lemniscate.h"

class File : public QWidget
{
    Q_OBJECT
public:
    File( QWidget *parent );
    void saveImage( QString fileString );
private:
    QImage *image;
    DrawPanel *drawPanel;
    Lemniscate *lemniscate;
};

#endif // FILE_H
