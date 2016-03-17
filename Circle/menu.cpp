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
    saveAction = new QAction( tr( "Save Settings" ), this );
    loadAction = new QAction( tr( "Load Settings" ), this );

    connect( saveAction, SIGNAL( triggered() ), this, SLOT( saveSettings() ) );
    connect( loadAction, SIGNAL( triggered() ), this, SLOT( loadSettings() ) );
}

void Menu::saveSettings()
{
    QString fileString = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Files (*.*)"));
    jsonDocument.write( circle->getX(), circle->getY(), circle->getR(), fileString );
}

void Menu::loadSettings()
{
    QString fileString = QFileDialog::getOpenFileName(this, tr("Load File"), "", tr("Files (*.*)"));
    jsonDocument.read( fileString, circle );
}

Menu::~Menu()
{

}

