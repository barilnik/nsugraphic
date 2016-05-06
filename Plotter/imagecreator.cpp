#include "imagecreator.h"

ImageCreator::ImageCreator( Shape *shape, QWidget *parent ) : QWidget( parent )
{
    this->shape = shape;
}

ImageCreator::~ImageCreator()
{

}

void ImageCreator::repaint()
{
    emit startRepaint();
}

QImage* ImageCreator::paint( const int &pWidth, const int &pHeight )
{
    QImage *image = new QImage( pWidth, pHeight, QImage::Format_RGB888 );
    uchar *buffer = image->bits();

    if( !buffer )
    {
        return NULL;
    }
    memset(buffer, 255, image->byteCount());

    int middleX = pWidth/2;
    int middleY = pHeight/2;

    for( int y = 0; y < pHeight; y++ )
    {
        buffer[ y*image->bytesPerLine() + middleX*3 ] = 255;
        buffer[ y*image->bytesPerLine() + middleX*3 + 1 ] = 0;
        buffer[ y*image->bytesPerLine() + middleX*3 + 2 ] = 0;
    }

    for( int x = 0; x < pWidth; x++ )
    {
        buffer[ middleY*image->bytesPerLine() + x*3 ] = 255;
        buffer[ middleY*image->bytesPerLine() + x*3 + 1 ] = 0;
        buffer[ middleY*image->bytesPerLine() + x*3 + 2 ] = 0;
    }

    if(shape)
        shape->draw(image);

    return image;
}
