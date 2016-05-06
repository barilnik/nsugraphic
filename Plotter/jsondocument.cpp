#include "jsondocument.h"

JsonDocument::JsonDocument()
{

}

void JsonDocument::write( int positionX1, int positionY1, int positionX2, int positionY2, QString fileString )
{
    focus1[ "x" ] = positionX1;
    focus1[ "y" ] = positionY1;
    focus2[ "x" ] = positionX2;
    focus2[ "y" ] = positionY2;

    jsonLemniscate << focus1;
    jsonLemniscate << focus2;

    sizePanel[ "x" ] = 800;
    sizePanel[ "y" ] = 800;

    panel[ "size" ] = sizePanel;

    json[ "lemniscate" ] = jsonLemniscate;
    json[ "panel" ] = panel;

    QFile saveFile( fileString );

    if( !saveFile.open( QIODevice::WriteOnly ) ) {
        qWarning( "Couldn't open save file." );
    }

    jsonDocument.setObject( json );
    saveFile.write( jsonDocument.toJson() );
    saveFile.close();
}

void JsonDocument::read( QString fileString, Lemniscate *lemniscate)
{
    this->lemniscate = lemniscate;

    QFile loadFile( fileString );
    loadFile.open(QIODevice::ReadOnly | QIODevice::Text);
    //QJsonDocument jsonDocument;
    jsonDocument.fromJson( loadFile.readAll() );
    //QJsonObject json = jsonDocument.object();
    json = jsonDocument.object();

    int newX1 = json.value( "x" ).toInt();
    int newY1 = json.value( "y" ).toInt();
    int newX2 = json.value( "x" ).toInt();
    int newY2 = json.value( "y" ).toInt();
    int newWidth = json.value( "width" ).toInt();
    int newHeight = json.value( "height" ).toInt();

    lemniscate->changeX1( newX1 );
    lemniscate->changeY1( newY1 );
    lemniscate->changeX2( newX2 );
    lemniscate->changeY2( newY2 );
}
