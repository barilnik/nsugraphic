#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
#include <QAction>
#include <QFileDialog>

#include "jsondocument.h"
#include "circle.h"
#include "drawpanel.h"
#include "file.h"

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
    void saveImage();
private:
    QAction *saveSetingsAction;
    QAction *loadSettingsAction;
    QAction *saveImageAction;
    JsonDocument jsonDocument;
    Circle *circle;
    DrawPanel *drawPanel;
    File *file;
};

#endif // MENU_H
