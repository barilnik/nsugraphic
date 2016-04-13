#include "controlspanel.h"

ControlsPanel::ControlsPanel(QWidget *parent, const int &x1, const int &y1, const int &x2, const int &y2, const int &r): QGroupBox(tr("Controls"), parent)
{
    controls = new QGridLayout(this);
    this->initElements(x1, y1, x2, y2, r);
    this->setMaximumHeight(100);
    this->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
    this->setLayout(controls);
}

ControlsPanel::~ControlsPanel()
{

}

void ControlsPanel::changeF1(Vector focus)
{
    x1Slider->setValue(focus.x());
    y1Slider->setValue(focus.y());
    x1SpinBox->setValue(focus.x());
    y1SpinBox->setValue(focus.y());
}

void ControlsPanel::changeF2(Vector focus)
{
    x2Slider->setValue(focus.x());
    y2Slider->setValue(focus.y());
    x2SpinBox->setValue(focus.x());
    y2SpinBox->setValue(focus.y());
}

void ControlsPanel::changeX1(const int &x1){
    emit x1Changed(x1);
}

void ControlsPanel::changeY1(const int &y1){
    emit y1Changed(y1);
}

void ControlsPanel::changeX2(const int &x2){
    emit x2Changed(x2);
}

void ControlsPanel::changeY2(const int &y2){
    emit y2Changed(y2);
}

void ControlsPanel::changeR(const int &r){
    emit rChanged(r);
}

QMap<QString, QString>* ControlsPanel::getData(){
    QMap<QString, QString> *map = new QMap<QString, QString>();
    map->insert(tr("x1"), QString::number(x1Slider->value()));
    map->insert(tr("y1"), QString::number(y1Slider->value()));
    map->insert(tr("x2"), QString::number(x2Slider->value()));
    map->insert(tr("y2"), QString::number(y2Slider->value()));
    map->insert(tr("r"), QString::number(rSlider->value()));

    return map;
}

void ControlsPanel::changeData(QMap<QString, QString> map){
    x1Slider->setValue(map.value(tr("x1")).toInt());
    y1Slider->setValue(map.value(tr("y1")).toInt());

    x2Slider->setValue(map.value(tr("x2")).toInt());
    y2Slider->setValue(map.value(tr("y2")).toInt());

    rSlider->setValue(map.value(tr("r")).toInt());

    x1SpinBox->setValue(map.value(tr("x1")).toInt());
    y1SpinBox->setValue(map.value(tr("y1")).toInt());

    x2SpinBox->setValue(map.value(tr("x2")).toInt());
    y2SpinBox->setValue(map.value(tr("y2")).toInt());

    rSpinBox->setValue(map.value(tr("r")).toInt());
}

QSpinBox* ControlsPanel::spinBoxInit(const int &min, const int &max, const int &current){
    QSpinBox *spinBox = new QSpinBox(this);
    spinBox->setRange(min, max);
    spinBox->setValue(current);
    spinBox->setSingleStep(1);
    spinBox->setMinimumSize(80, 20);
    spinBox->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    return spinBox;
}

QSlider* ControlsPanel::sliderInint(const int &min, const int &max, const int &current){
    QSlider *slider = new QSlider(Qt::Horizontal, this);
    slider->setRange(min, max);
    slider->setValue(current);
    slider->setSingleStep(1);
    slider->setMinimumSize(80, 20);
    slider->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    return slider;
}

QLabel* ControlsPanel::textFieldInit(const char *str){
    QLabel *label = new QLabel(this);
    label->setText(str);
    label->setMinimumSize(80, 20);
    label->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    return label;
}

void ControlsPanel::initElements(const int &x1, const int &y1, const int &x2, const int &y2, const int &r){

    x1SpinBox = spinBoxInit(-1000, 1000, x1);
    x1Slider = sliderInint(-1000, 1000, x1);

    connect(x1Slider, SIGNAL(valueChanged(int)), this, SLOT(changeX1(int)));
    connect(x1Slider, SIGNAL(valueChanged(int)), x1SpinBox, SLOT(setValue(int)));
    connect(x1SpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeX1(int)));
    connect(x1SpinBox, SIGNAL(valueChanged(int)), x1Slider, SLOT(setValue(int)));

    controls->addWidget(textFieldInit("x1"), 0, 0);
    controls->addWidget(x1SpinBox, 1, 0);
    controls->addWidget(x1Slider, 2, 0);


    y1SpinBox = spinBoxInit(-1000, 1000, y1);
    y1Slider = sliderInint(-1000, 1000, y1);

    connect(y1Slider, SIGNAL(valueChanged(int)), this, SLOT(changeY1(int)));
    connect(y1Slider, SIGNAL(valueChanged(int)), y1SpinBox, SLOT(setValue(int)));
    connect(y1SpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeY1(int)));
    connect(y1SpinBox, SIGNAL(valueChanged(int)), y1Slider, SLOT(setValue(int)));

    controls->addWidget(textFieldInit("y1"), 0, 1);
    controls->addWidget(y1SpinBox, 1, 1);
    controls->addWidget(y1Slider, 2, 1);


    x2SpinBox = spinBoxInit(-1000, 1000, x2);
    x2Slider = sliderInint(-1000, 1000, x2);

    connect(x2Slider, SIGNAL(valueChanged(int)), this, SLOT(changeX2(int)));
    connect(x2Slider, SIGNAL(valueChanged(int)), x2SpinBox, SLOT(setValue(int)));
    connect(x2SpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeX2(int)));
    connect(x2SpinBox, SIGNAL(valueChanged(int)), x2Slider, SLOT(setValue(int)));

    controls->addWidget(textFieldInit("x2"), 0, 2);
    controls->addWidget(x2SpinBox, 1, 2);
    controls->addWidget(x2Slider, 2, 2);


    y2SpinBox = spinBoxInit(-1000, 1000, y2);
    y2Slider = sliderInint(-1000, 1000, y2);

    connect(y2Slider, SIGNAL(valueChanged(int)), this, SLOT(changeY2(int)));
    connect(y2Slider, SIGNAL(valueChanged(int)), y2SpinBox, SLOT(setValue(int)));
    connect(y2SpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeY2(int)));
    connect(y2SpinBox, SIGNAL(valueChanged(int)), y2Slider, SLOT(setValue(int)));

    controls->addWidget(textFieldInit("y2"), 0, 3);
    controls->addWidget(y2SpinBox, 1, 3);
    controls->addWidget(y2Slider, 2, 3);


    rSpinBox = spinBoxInit(0, 1000, r);
    rSlider = sliderInint(0, 1000, r);

    connect(rSlider, SIGNAL(valueChanged(int)), this, SLOT(changeR(int)));
    connect(rSlider, SIGNAL(valueChanged(int)), rSpinBox, SLOT(setValue(int)));
    connect(rSpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeR(int)));
    connect(rSpinBox, SIGNAL(valueChanged(int)), rSlider, SLOT(setValue(int)));

    controls->addWidget(textFieldInit("r"), 0, 4);
    controls->addWidget(rSpinBox, 1, 4);
    controls->addWidget(rSlider, 2, 4);
}
