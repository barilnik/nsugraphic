#include "menu.h"

Menu::Menu( QWidget *parent, Circle *circle ) : QWidget( parent ), circle( circle )
{
    createActions();
    //drawPanel = new DrawPanel(this, circle);

	QMenu *customMenu = new QMenu( tr( "File" ), this );
    customMenu->addAction( saveSetingsAction);
    customMenu->addAction( loadSettingsAction );
    customMenu->addAction( saveImageAction );

    QMenuBar *menuBar = new QMenuBar( this );
    menuBar->addMenu(customMenu);
}

void Menu::createActions()
{
    saveSetingsAction = new QAction( tr( "Save Settings" ), this );
    loadSettingsAction = new QAction( tr( "Load Settings" ), this );
    saveImageAction = new QAction( tr( "Save Image" ), this );

    connect( saveSetingsAction, SIGNAL( triggered() ), this, SLOT( saveSettings() ) );
    connect( loadSettingsAction, SIGNAL( triggered() ), this, SLOT( loadSettings() ) );
    connect( saveImageAction, SIGNAL( triggered() ), this, SLOT( saveImage() ) );
}

void Menu::saveSettings()
{
    //drawPanel->saveImage();
    QString fileString = QFileDialog::getSaveFileName(this, QString::fromUtf8("Сохранить файл"),
                                                                                        QDir::currentPath(),
                                                                                        "JSON (*.json);;All files (*.*)");//getSaveFileName( this, tr( "Save File" ), "", tr( "Files (*.*)" ) );
    jsonDocument.write( circle->getX(), circle->getY(), circle->getR(), fileString );



    //QImage *image = drawPanel->getImage();
    //image->save("imageeee.png");
    //file = new File( this, circle );
    //file->saveImage( fileString );
}

void Menu::saveImage()
{
    //drawPanel = new DrawPanel(this, circle);
    //QString fileString = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Files (*.png)"));
                                                     /* QString::fromUtf8("Сохранить файл"),
                                                      QDir::currentPath(),
                                                      "Image (*.png);;All files (*.*)");*///getSaveFileName( this, tr( "Save File" ), "", tr( "Files (*.png)" ) );
    QString fileString = QFileDialog::getSaveFileName(0, "Сохранить как...", QDir::currentPath(), "All types(*.*);;PNG (*.png);;JPG (*jpeg *jpg);; BMP (*.bmp)");
    drawPanel->saveImage( fileString );
}

void Menu::loadSettings()
{
    QString fileString = QFileDialog::getOpenFileName(this, tr("Load File"), "", tr("Files (*.*)"));
    jsonDocument.read( fileString, circle );
}

Menu::~Menu()
{

}

