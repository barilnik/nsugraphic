#ifndef JSONDOCUMENT_H
#define JSONDOCUMENT_H

#include <QWidget>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

#include "resource.h"
#include "circle.h"

class JsonDocument
{
public:
    JsonDocument();
    void write( double positionX, double positionY, double positionR, QString filestring );
    void read( QString file, Circle *circle );
private:
    QJsonDocument jsonDocument;
    QJsonObject json;
    QJsonArray jsonArray;
    QJsonArray jsonCircle;
    QJsonObject radius;
    QJsonObject position;
    QJsonObject panel;
    QJsonObject sizePanel;

    Circle *circle;
};

#endif // JSONDOCUMENT_H
