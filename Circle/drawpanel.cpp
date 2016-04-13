#include "drawpanel.h"
#include "QFile"
#include "QTextStream"

DrawPanel::DrawPanel( QWidget *parent, Circle *circle ) : QWidget( parent )
{
    m_pCircle = circle;
}

void DrawPanel::paintEvent( QPaintEvent* /*event*/ )
{
    QPainter painter( this ) ;
    backBuffer = new QImage( width(), height(), QImage::Format_RGB888 );

    //QImage backBuffer( width(), height(), QImage::Format_RGB888 );

    uchar *pubBuffer = backBuffer->bits();
    if ( !pubBuffer )
    {
        return;
    }

   // memset( pubBuffer, BLACK_COLOR, backBuffer.byteCount() );

    if ( m_pCircle )
    {
        m_pCircle->Draw( backBuffer );
    }

    painter.drawImage( 0, 0, *backBuffer );
    //backBuffer->save("D:\\omage.png");
}

void DrawPanel::setSizePanel( int width, int height )
{
    // width, height);
}

QImage DrawPanel::getImage()
{
    return *backBuffer;
}

void DrawPanel::saveImage(QString fileString)
{
    //backBuffer->save("D:\\kkkk.jpg");
    QFile *file = new QFile( fileString );
    if (fileString.isNull())
       return;
    backBuffer->save(fileString, 0, 100);
/*
      if(!file->open(QIODevice::ReadWrite))
      {
          qWarning( "Couldn't open save file." );
      }

      file->close();
      */
      //file.write( backBuffer->save() );
   // QFile file( fileString );
    //QImage *image = drawPanel->getImage();

    //if(file.open(QIODevice::WriteOnly)){
        //drawPanel->getImage()->save(file, "PNG");
        //image->save(file, "PNG");
       // backBuffer->save( "D:\\file.png" );
    //}
    //file.close();
    //backBuffer->save("D:\\imageeee.png");
}
