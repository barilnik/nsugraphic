#include "jsondocument.h"

JsonDocument::JsonDocument()
{

}

void JsonDocument::write( double positionX, double positionY, double positionR, QString fileString )
{
    //json = new QJsonDocument( );
   /* position{
      { "x", positionX },
        { "y", positionY }
    };*/


    radius["R"] = positionR;
    position["x"] = positionX;
    position["y"] = positionY;
    qDebug( "R:", positionR);

    //circle.append( radius );
    //circle.append( position );
    circle << radius;
    circle << position;

    sizePanel["x"] = DEFAULT_HEIGHT;
    sizePanel["y"] = DEFAULT_WIDTH;

    panel["panel"] = sizePanel;

    json["circles"] = circle;
    json["panel"] = panel;

    QFile saveFile( fileString );//( QStringLiteral( "D:\\Education\Graphic\Circle\save.json" ) );
    saveFile.setFileName("save1.json");

    if( !saveFile.open( QIODevice::WriteOnly ) ) {
        qWarning( "Couldn't open save file." );
    }

    //jsonArray.append( circle );
    //jsonArray.append( panel );

    //jsonArray << circle;
    //jsonArray << panel;

   // json["json"] = jsonArray;
    jsonDocument.setObject( json );

    saveFile.write( jsonDocument.toJson() );

    saveFile.close();
}

void JsonDocument::read()
{

}
