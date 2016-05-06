#include "drawpanel.h"
#include "QFile"
#include "QTextStream"

DrawPanel::DrawPanel( QWidget *parent, Circle *circle ) : QWidget( parent ), circle( circle )
{
}

DrawPanel::~DrawPanel()
{
<<<<<<< HEAD

}

void DrawPanel::paintEvent( QPaintEvent */*event*/ )
{
	QPainter *painter = new QPainter( this );

	QImage backBuffer( width(), height(), QImage::Format_RGB888 );
=======
    QPainter painter( this ) ;
    backBuffer = new QImage( width(), height(), QImage::Format_RGB888 );

    //QImage backBuffer( width(), height(), QImage::Format_RGB888 );

    uchar *pubBuffer = backBuffer->bits();
    if ( !pubBuffer )
    {
        return;
    }
>>>>>>> circle

	uchar* pubBuffer = backBuffer.bits();
	if( !pubBuffer )
	{
		return;
	}
	memset( pubBuffer, 0, backBuffer.byteCount() );

<<<<<<< HEAD
	if( circle )
	{
		circle->draw( &backBuffer );
	}

	painter->drawImage( 0, 0, backBuffer );
=======
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
    QByteArray ba = fileString.toLatin1();
        char *fileChar = ba.data();

    //backBuffer->save("D:\\kkkk.jpg");
    QFile *file = new QFile( fileChar );
    /*if (fileString.isNull())
       return;*/
    if(file->open(QIODevice::ReadWrite)){
        backBuffer->save(file, 0, 100);
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
>>>>>>> circle
}
