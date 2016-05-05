#ifndef JSONDOCUMENT_H
#define JSONDOCUMENT_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

#include "lemniscate.h"

class JsonDocument
{
public:
    JsonDocument();
    void write( int positionX1, int positionY1, int positionX2, int positionY2, QString fileString );
    void read( QString fileString, Lemniscate *lemniscate );
private:
    QJsonDocument jsonDocument;
    QJsonObject json;
    QJsonArray jsonArray;
    QJsonArray jsonLemniscate;
    QJsonObject focus1;
    QJsonObject focus2;
    QJsonObject panel;
    QJsonObject sizePanel;

    Lemniscate *lemniscate;
};

#endif // JSONDOCUMENT_H
