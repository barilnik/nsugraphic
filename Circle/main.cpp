#include "mainwindow.h"
#include "circle.h"
#include "jsondocument.h"
#include <QApplication>

int main( int argc, char *argv[] )
{
    if( argc == 2 )
    {
        double positionX;
        double positionY;
        double radius;
        double width;
        double height;

        QString filename( argv[ 1 ] );

        QFile file( filename );
        if ( !file.open( QIODevice::ReadOnly ) )
        {
            return -1;
        }

        JsonDocument jsonDocument;
        jsonDocument.write( positionX, positionY, radius, filename);

        QImage backBuffer(width, height, QImage::Format_RGB888);

        uchar* pubBuffer = backBuffer.bits();

        if ( !pubBuffer )
        {
            return -1;
        }

        memset( pubBuffer, BLACK_COLOR, backBuffer.byteCount() );

        if( abs( positionX ) > MAX_COORD || abs( positionY ) > MAX_COORD || radius < MIN_RADIUS || radius > MAX_RADIUS)
        {
            return -1;
        }

        Circle* m_pCircle = new Circle( positionX, positionY, radius );
        m_pCircle->Draw( &backBuffer );

        backBuffer.save( "Circle.png" );

        return 0;
    }
    else
    {
        QApplication a( argc, argv );
        MainWindow w;
        w.show();

        return a.exec();
    }

}
