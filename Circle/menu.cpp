#include "menu.h"

Menu::Menu( QWidget *parent, Circle *circle ) : QWidget( parent ), circle( circle )
{
    createActions();

	QMenu *customMenu = new QMenu( tr( "File" ), this );
    customMenu->addAction( saveAction);
    customMenu->addAction( loadAction );

    QMenuBar *menuBar = new QMenuBar( this );
    menuBar->addMenu(customMenu);
}

void Menu::createActions()
{
    saveAction = new QAction( tr( "&Save Settings" ), this );
    loadAction = new QAction( tr( "&Load Settings" ), this );

    connect( saveAction, SIGNAL( trigged() ), this, SLOT( saveSettings() ) );
    connect( loadAction, SIGNAL( trigged() ), this, SLOT( loadSettings() ) );
}

void Menu::saveSettings()
{
    //jsonDocument = new JsonDocument();
    jsonDocument.write( circle->getX(), circle->getY(), circle->getR() );
}

void Menu::loadSettings()
{

}

Menu::~Menu()
{

}

