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

//	QWidget *window = new QWidget( this );

	mainLayout = new QGridLayout( this );

	controlsPanel = new ControlsPanel( this );
	Circle *circle = new Circle();

	drawPanel = new DrawPanel( NULL, circle );
	this->drawPanel = drawPanel;

/*	setCentralWidget( widget );
	mainLayout->setMenuBar( menuBar() );
	mainLayout->setMargin( 10 );*/

	QGroupBox *box = new QGroupBox(tr("Draw panel"), this);
		QGridLayout *drawPanelLayout = new QGridLayout(this);
		drawPanelLayout->addWidget(drawPanel);
		box->setLayout(drawPanelLayout);
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

