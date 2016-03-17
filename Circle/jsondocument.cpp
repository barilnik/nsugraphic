#include "jsondocument.h"

JsonDocument::JsonDocument()
{

}

void JsonDocument::write( double positionX, double positionY, double positionR, QString fileString )
{
    radius["R"] = positionR;
    position["x"] = positionX;
    position["y"] = positionY;
    qDebug( "R:", positionR);

    jsonCircle << radius;
    jsonCircle << position;

    sizePanel["x"] = DEFAULT_HEIGHT;
    sizePanel["y"] = DEFAULT_WIDTH;

    panel["size"] = sizePanel;

    json["circles"] = jsonCircle;
    json["panel"] = panel;

    QFile saveFile( fileString );
    saveFile.setFileName("save.json");

    if( !saveFile.open( QIODevice::WriteOnly ) ) {
        qWarning( "Couldn't open save file." );
    }

    jsonDocument.setObject( json );

    saveFile.write( jsonDocument.toJson() );

    saveFile.close();
}

void JsonDocument::read( QString fileString, Circle *circle )
{
    this->circle = circle;

    QFile loadFile( fileString );
    loadFile.open(QIODevice::ReadOnly | QIODevice::Text);
    //QJsonDocument jsonDocument;
    jsonDocument.fromJson( loadFile.readAll() );
    //QJsonObject json = jsonDocument.object();
    json = jsonDocument.object();

    int newX = json.value("x").toInt();
    int newY = json.value("y").toInt();
    int newR = json.value("R").toInt();
    int newWidth = json.value("width").toInt();
    int newHeight = json.value("height").toInt();

    circle->setPositionX( newX );
    circle->setPositionY( newY );
    circle->setRadius( newR );
}
