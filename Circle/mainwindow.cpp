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

<<<<<<< HEAD
/*	setCentralWidget( widget );
	mainLayout->setMenuBar( menuBar() );
	mainLayout->setMargin( 10 );*/
=======
    mainLayout->addWidget( drawPanelBoxLayout, 1, 1 );
    mainLayout->addWidget( controlsPanelBoxLayout, 1, 2 );
*/
    setLayout( mainLayout );
    resize( width, height );
>>>>>>> circle

	QGroupBox *box = new QGroupBox(tr("Draw panel"), this);
		QGridLayout *drawPanelLayout = new QGridLayout(this);
		drawPanelLayout->addWidget(drawPanel);
		box->setLayout(drawPanelLayout);
}

MainWindow::~MainWindow()
{

}

<<<<<<< HEAD
void MainWindow::save()
{
	//Save File
}

void MainWindow::load()
{
	//Load File
}
=======
void MainWindow::setSize( int width, int height )
{
    resize( width, height );
}

>>>>>>> circle

