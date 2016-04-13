#include "mainwindow.h"
#include "ui_mainwindow.h"
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
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QAction *save = new QAction(this);
    save->setText(tr("Save"));
    connect(save, SIGNAL(triggered()), this, SLOT(save()));

    QAction *load = new QAction(this);
    load->setText(tr("Load"));
    connect(load, SIGNAL(triggered()), this, SLOT(load()));

    QMenu* file = new QMenu("File", this);
    file->addAction(save);
    file->addAction(load);

    QMenuBar *menuBar = new QMenuBar(this);
    menuBar->addMenu(file);

    mainWidget = new MainWidget(this);
    connect(this, SIGNAL(dataChanged(QMap<QString,QString>)), mainWidget, SLOT(changeData(QMap<QString,QString>)));

    setMenuBar(menuBar);
    setCentralWidget(mainWidget);
    setObjectName("Plotter");
    resize(800, 600);
}
