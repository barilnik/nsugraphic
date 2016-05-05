#include "drawpanel.h"

DrawPanel::DrawPanel( QWidget *parent, Lemniscate* newLemniscate) : QWidget( parent )
{
    lemniscate = newLemniscate;
    connect( lemniscate, SIGNAL( repaint() ), this, SLOT( repaint() ) );
}

DrawPanel::~DrawPanel()
{

}

void DrawPanel::paintEvent(QPaintEvent */*event*/)
{
    QPainter painter( this );
    QImage backBuffer( width(), height(), QImage::Format_RGB888 );

    uchar* pubBuffer = backBuffer.bits();
    if( !pubBuffer )
    {
        return;
    }
    memset( pubBuffer, 255, backBuffer.byteCount() );
    //
    if( lemniscate )
    {
        lemniscate->draw( &backBuffer );
    }
    //
    painter.drawImage( 0,0, backBuffer );
}


void DrawPanel::saveImage(QString fileString)
{
    QByteArray ba = fileString.toLatin1();
        char *fileChar = ba.data();

    //backBuffer->save("D:\\kkkk.jpg");
    QFile *file = new QFile( fileChar );
    /*if (fileString.isNull())
       return;*/
    if(file->open(QIODevice::ReadWrite)){
        //backBuffer->save(file, 0, 100);
    }
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
