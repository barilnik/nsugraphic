#include "mainwindow.h"
//#include "ui_mainwindow.h"
/*
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
*/
MainWindow::MainWindow(QWidget *parent) : QMainWindow( parent )
{
    QWidget *widget = new QWidget( this );
    setCentralWidget( widget );

    lemniscate = new LemniscateOfBernoulli();

    QGridLayout *grid = new QGridLayout;
    grid->addWidget( createFirstExclusiveGroup(), 0, 0, 5, 0 );
    grid->addWidget( createSecondExclusiveGroup(), 5, 0 );

    widget->setLayout( grid );

    setWindowTitle( tr( "Plotter" ) );
    resize( 800, 800 );

    createMenus();
   /* QAction *save = new QAction(this);
    save->setText(tr("Save"));
    connect(save, SIGNAL(triggered()), this, SLOT(save()));

    QAction *load = new QAction(this);
    load->setText(tr("Load"));
    connect(load, SIGNAL(triggered()), this, SLOT(load()));

    QMenu* file = new QMenu("File", this);
    file->addAction(save);
    file->addAction(load);

    QMenuBar *menuBar = new QMenuBar(this);
    menuBar->addMenu(file);*/
/*
    mainWidget = new MainWidget(this);
    connect(this, SIGNAL(dataChanged(QMap<QString,QString>)), mainWidget, SLOT(changeData(QMap<QString,QString>)));

    setMenuBar(menuBar);
    setCentralWidget(mainWidget);*/
   /* setObjectName("Plotter");
    resize(800, 600);*/
}

QGroupBox *MainWindow::createFirstExclusiveGroup()
{
    QGroupBox *groupBox = new QGroupBox(tr("Draw Panel"));
    drawPanel = new DrawPanel(this, lemniscate);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(drawPanel);

    groupBox->setLayout(vbox);

    return groupBox;
}
QGroupBox *MainWindow::createSecondExclusiveGroup()
{
    QGroupBox *groupBox = new QGroupBox(tr("Controls"));
    QGridLayout *grid = new QGridLayout(this);

    valueX1 = new ControlPanel(this);
    valueX2 = new ControlPanel(this);
    valueY1 = new ControlPanel(this);
    valueY2 = new ControlPanel(this);
    valueR = new ControlPanel(this);

    valueX1->setDefaults(tr("x1"),-1000,1000,-10);
    valueX2->setDefaults(tr("x2"),-1000,1000,10);
    valueY1->setDefaults(tr("y1"),-1000,1000,0);
    valueY2->setDefaults(tr("y2"),-1000,1000,0);
    valueR->setDefaults(tr("r"),0,1000,10);

    grid->addWidget(valueX1,0,0);
    grid->addWidget(valueY1,0,1);
    grid->addWidget(valueX2,0,2);
    grid->addWidget(valueY2,0,3);
    grid->addWidget(valueR,0,4);

    groupBox->setLayout(grid);

    connect(valueX1,SIGNAL(valueChanged(int)), lemniscate, SLOT(changedX1(int)));
    connect(valueX2,SIGNAL(valueChanged(int)), lemniscate, SLOT(changedX2(int)));
    connect(valueY1,SIGNAL(valueChanged(int)), lemniscate, SLOT(changedY1(int)));
    connect(valueY2,SIGNAL(valueChanged(int)), lemniscate, SLOT(changedY2(int)));
    connect(valueR,SIGNAL(valueChanged(int)), lemniscate, SLOT(changedR(int)));

    connect(lemniscate,SIGNAL(valueChangeX1(int)),valueX1,SLOT(setValue(int)));
    connect(lemniscate,SIGNAL(valueChangeX2(int)),valueX2,SLOT(setValue(int)));
    connect(lemniscate,SIGNAL(valueChangeY1(int)),valueY1,SLOT(setValue(int)));
    connect(lemniscate,SIGNAL(valueChangeY2(int)),valueY2,SLOT(setValue(int)));
    connect(lemniscate,SIGNAL(valueChangeRadius(int)),valueR,SLOT(setValue(int)));

    return groupBox;
}

void MainWindow::createMenus(){
    openAct = new QAction(tr("Open"), this);
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

    saveAct = new QAction(tr("Save"), this);
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));

    fileMenu = menuBar()->addMenu(tr("File"));
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
}
