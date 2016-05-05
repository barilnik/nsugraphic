#include "file.h"

File::File( QWidget *parent ) : QWidget( parent )
{

}

void File::saveImage( QString fileString )
{
    drawPanel = new DrawPanel( this, lemniscate );
    image->save( "image.png" );
}
