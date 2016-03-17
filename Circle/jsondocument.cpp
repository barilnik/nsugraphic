#include "jsondocument.h"

JsonDocument::JsonDocument()
{

}

void JsonDocument::write( double positionX, double positionY, double positionR )
{
    //json = new QJsonDocument( );
   /* position{
      { "x", positionX },
        { "y", positionY }
    };*/


    radius["R"] = positionR;
    position["x"] = positionX;
    position["y"] = positionY;

    circle.append( radius );
    circle.append( position );

    sizePanel["x"] = DEFAULT_HEIGHT;
    sizePanel["y"] = DEFAULT_WIDTH;

    panel["panel"] = sizePanel;

    QFile saveFile( QStringLiteral( "D:\\Education\Graphic\Circle\save.json" ) );

    if( !saveFile.open( QIODevice::WriteOnly ) ) {
        qWarning( "Couldn't open save file." );
    }

    jsonArray.append( circle );
    jsonArray.append( panel );

    json["json"] = jsonArray;
    jsonDocument.setObject( json );

    saveFile.write( jsonDocument.toJson() );
}

void JsonDocument::read()
{

}
