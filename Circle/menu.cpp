#include "menu.h"

Menu::Menu( QWidget *parent ) : QWidget( parent )
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

    connect( saveAction, SIGNAL( trigged() ), this, SLOT( save() ) );
    connect( loadAction, SIGNAL( trigged() ), this, SLOT( load() ) );
}

void Menu::saveSettings()
{

}

void Menu::loadSettings()
{

}

Menu::~Menu()
{

}

