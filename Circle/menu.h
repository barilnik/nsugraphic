#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
<<<<<<< HEAD
=======
#include <QAction>
#include <QFileDialog>

#include "jsondocument.h"
#include "circle.h"
#include "drawpanel.h"
#include "file.h"
>>>>>>> circle

class Menu : public QWidget
{
	Q_OBJECT
public:
	explicit Menu( QWidget *parent = 0 );
	~Menu();
<<<<<<< HEAD
//	QMenu getMenu();
//private:
//	QMenu *customMenu;

=======
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
>>>>>>> circle
};

#endif // MENU_H
