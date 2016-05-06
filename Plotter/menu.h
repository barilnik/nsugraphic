#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
#include <QAction>
#include <QFileDialog>

#include "jsondocument.h"
//#include "lemniscate.h"
#include "drawpanel.h"
#include "file.h"

class Menu : public QWidget
{
    Q_OBJECT
public:
    explicit Menu( QWidget *parent, Lemniscate *lemniscate );
    void createActions();
private slots:
    void saveSettings();
    void loadSettings();
    void saveImage();
private:
    QAction *saveSettingsAction;
    QAction *loadSettingsAction;
    QAction *saveImageAction;
    JsonDocument jsonDocument;
    Lemniscate *lemniscate;
    DrawPanel *drawPanel;
    File *file;
};

#endif // MENU_H
