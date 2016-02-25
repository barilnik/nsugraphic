#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>

MainWindow::MainWindow( QWidget *parent ) :
	QMainWindow( parent )
{
	saveAction = new QAction( tr( "&Save" ), this );
	loadAction = new QAction( tr( "&Load" ), this );

	connect( saveAction, SIGNAL( trigged()), this, SLOT( save() ) );
	connect( loadAction, SIGNAL( trigged() ), this, SLOT( load() ) );


	QMenu *customMenu = new QMenu( this );
	customMenu = menuBar()->addMenu(tr("&File"));
	customMenu->addAction( saveAction );
	customMenu->addAction( loadAction );
	menuBar()->addMenu( customMenu );

	QTextEdit *edit = new QTextEdit( this);
	setCentralWidget( edit );
}

MainWindow::~MainWindow()
{

}

void MainWindow::save()
{
	//Save File
}

void MainWindow::load()
{
	//Load File
}

