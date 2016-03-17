#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
#include <QAction>

#include "circle.h"
#include "jsondocument.h"

class Menu : public QWidget
{
	Q_OBJECT
public:
    explicit Menu( QWidget *parent, Circle *circle );
    void createActions();
	~Menu();
private slots:
    void saveSettings();
    void loadSettings();
private:
    QAction *saveAction;
    QAction *loadAction;

    Circle *circle;
    JsonDocument jsonDocument;

};

#endif // MENU_H
