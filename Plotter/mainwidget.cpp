#include "mainwidget.h"
/*
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    layout = new QGridLayout(this);
    controls = new ControlsPanel(this);

    BernoulliLemniscate *oval = new BernoulliLemniscate(-10, 0, 10, 0, 10, this);
    ImageCreator *painter = new ImageCreator(oval, this);
    QWidget *drawPanel = new DrawPanel(painter, this);

    QGroupBox *box = new QGroupBox(tr("Draw panel"), this);
    QGridLayout *drawPanelLayout = new QGridLayout(this);
    drawPanelLayout->addWidget(drawPanel);
    box->setLayout(drawPanelLayout);

    connect(controls, SIGNAL(x1Changed(int)), oval, SLOT(setX1(int)));
    connect(controls, SIGNAL(y1Changed(int)), oval, SLOT(setY1(int)));
    connect(controls, SIGNAL(x2Changed(int)), oval, SLOT(setX2(int)));
    connect(controls, SIGNAL(y2Changed(int)), oval, SLOT(setY2(int)));
    connect(controls, SIGNAL(rChanged(int)), oval, SLOT(setR(int)));

    connect(oval, SIGNAL(startRepaint()), painter, SLOT(repaint()));
    connect(painter, SIGNAL(startRepaint()), drawPanel, SLOT(repaint()));

    connect(oval, SIGNAL(f1Changed(Vector)), controls, SLOT(changeF1(Vector)));
    connect(oval, SIGNAL(f2Changed(Vector)), controls, SLOT(changeF2(Vector)));

    connect(this, SIGNAL(dataChanged(QMap<QString, QString>)), oval, SLOT(changeData(QMap<QString, QString>)));
    connect(this, SIGNAL(dataChanged(QMap<QString, QString>)), controls, SLOT(changeData(QMap<QString, QString>)));

    layout->addWidget(box, 0, 0);
    layout->addWidget(controls, 1, 0);
    this->setLayout(layout);
}

void MainWidget::changeData(QMap<QString, QString> map){
    emit dataChanged(map);
}

MainWidget::~MainWidget()
{

}

QMap<QString, QString>* MainWidget::getData(){
    return controls->getData();
}
*/
