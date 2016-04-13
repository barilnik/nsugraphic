#include "file.h"

File::File( QWidget *parent, Circle *circle ) : QWidget( parent ), circle( circle )
{

}

void File::saveImage( QString fileString )
{
    //QImage image("image.png");
    drawPanel = new DrawPanel( this, circle );

    *image = drawPanel->getImage();
    image->save( "image1.png" );
}
