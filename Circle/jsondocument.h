#ifndef JSONDOCUMENT_H
#define JSONDOCUMENT_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

#include "resource.h"

class JsonDocument
{
public:
    JsonDocument();
    void write( double positionX, double positionY, double positionR, QString filestring );
    void read();
private:
    QJsonDocument jsonDocument;
    QJsonObject json;
    QJsonArray jsonArray;
    QJsonArray circle;
    QJsonObject radius;
    QJsonObject position;
    QJsonObject panel;
    QJsonObject sizePanel;
};

#endif // JSONDOCUMENT_H
