#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
#include <QAction>
#include <QFileDialog>

#include "jsondocument.h"
#include "circle.h"

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
    JsonDocument jsonDocument;
    Circle *circle;
};

#endif // MENU_H
