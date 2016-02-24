#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    QMenu *menu = new QMenu(this);
    menu = menuBar()->addMenu(tr("&File"));
    menu->addAction(tr("&Save"));

    QGroupBox *drawPanelBox = new QGroupBox(tr("Draw Panel"));
    QGridLayout *drawPanelLayout = new QGridLayout;

    QPainter painter(this);
    /*painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");*/
    QWidget *drawPanel = new DrawPanel(painter, this);

    drawPanelLayout->addWidget(drawPanel);
    drawPanelBox->setLayout(drawPanelLayout);

    QGroupBox *controlsPanel = new QGroupBox(tr("Controls Panel"));



    //ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
