#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>

MainWindow::MainWindow( QWidget *parent ) :
	QMainWindow( parent ), ui(new Ui::MainWindow)
{
	QMenu *customMenu = new QMenu( this );
	customMenu = menuBar()->addMenu(tr("&File"));
	customMenu->addAction( tr( "&Save" ) );
	customMenu->addAction( tr( "&Load" ) );
	menuBar()->addMenu( customMenu );

	QTextEdit *edit = new QTextEdit( this);
	setCentralWidget( edit );
   // ui->setupUi(this);
}

MainWindow::~MainWindow()
{

}

