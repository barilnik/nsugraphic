#include "controlspanel.h"

ControlsPanel::ControlsPanel( QWidget *parent, const int &x, const int &y, const int &r ) : QGroupBox( tr( "Controls" ), parent )
{
	controlsLayout = new QGridLayout( this );

	this->setMaximumWidth(200);
	this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);

	this->setElements(x, y, r);

	controlsLayout->setAlignment(Qt::AlignTop);
	this->setLayout(controlsLayout);
}
ControlsPanel::~ControlsPanel()
{

}

void changeX( const int &x )
{
	emit xChanged( x );
}

void changeY( const int &y )
{
	emit yChanged( y );
}

void changeR( const int &r )
{
	emit rChanged(r);
}

QMap< QString, QString >* getData()
{
	QMap<QString, QString> *map = new QMap< QString, QString >();
	map->insert( tr( "PosX" ), QString::number( xSlider->value() ) );
	map->insert( tr( "PosY" ), QString::number( ySlider->value() ) );
	map->insert( tr( "R" ), QString::number( rSlider->value() ) );

	return map;
}

void changeData( QMap< QString, QString > map )
{
	xSlider->setValue(map.value(tr("PosX")).toInt());
	ySlider->setValue(map.value(tr("PosY")).toInt());
	ySlider->setValue(map.value(tr("R")).toInt());
	xSpinBox->setValue(map.value(tr("PosX")).toInt());
	ySpinBox->setValue(map.value(tr("PosY")).toInt());
	rSpinBox->setValue(map.value(tr("R")).toInt());
}

QSpinBox* spinBoxInit(const int &min, const int &max, const int &current)
{
	QSpinBox *spinBox = new QSpinBox(this);
	spinBox->setRange(min, max);
	spinBox->setValue(current);
	spinBox->setSingleStep(1);
	spinBox->setMinimumSize(80, 20);
	spinBox->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	return spinBox;
}

QSlider* sliderInint(const int &min, const int &max, const int &current)
{
	QSlider *slider = new QSlider(Qt::Horizontal, this);
	slider->setRange(min, max);
	slider->setValue(current);
	slider->setSingleStep(1);
	slider->setMinimumSize(160, 20);
	slider->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	return slider;
}

QLabel* textFieldInit(const char *str)
{
	QLabel *label = new QLabel(this);
	label->setText(str);
	label->setMinimumSize(80, 20);
	label->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	return label;
}

void setWidgets( const int &x, const int &y, const int &r )
{

	xSpinBox = spinBoxInit(-10000, 10000, x);
	xSlider = sliderInint(-10000, 10000, x);

	connect(xSlider, SIGNAL(valueChanged(int)), this, SLOT(changeX(int)));
	connect(xSlider, SIGNAL(valueChanged(int)), xSpinBox, SLOT(setValue(int)));
	connect(xSpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeX(int)));
	connect(xSpinBox, SIGNAL(valueChanged(int)), xSlider, SLOT(setValue(int)));

	controls->addWidget(textFieldInit("Position X"), 0, 0);
	controls->addWidget(xSpinBox, 0, 1);
	controls->addWidget(xSlider, 1, 0);


	ySpinBox = spinBoxInit(-10000, 10000, y);
	ySlider = sliderInint(-10000, 10000, y);

	connect(ySlider, SIGNAL(valueChanged(int)), this, SLOT(changeY(int)));
	connect(ySlider, SIGNAL(valueChanged(int)), ySpinBox, SLOT(setValue(int)));
	connect(ySpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeY(int)));
	connect(ySpinBox, SIGNAL(valueChanged(int)), ySlider, SLOT(setValue(int)));

	controls->addWidget(textFieldInit("Position Y"), 2, 0);
	controls->addWidget(ySpinBox, 2, 1);
	controls->addWidget(ySlider, 3, 0);


	rSpinBox = spinBoxInit(0, 10000, r);
	rSlider = sliderInint(0, 10000, r);

	connect(rSlider, SIGNAL(valueChanged(int)), this, SLOT(changeR(int)));
	connect(rSlider, SIGNAL(valueChanged(int)), rSpinBox, SLOT(setValue(int)));
	connect(rSpinBox, SIGNAL(valueChanged(int)), this, SLOT(changeR(int)));
	connect(rSpinBox, SIGNAL(valueChanged(int)), rSlider, SLOT(setValue(int)));

	controls->addWidget(textFieldInit("R"), 4, 0);
	controls->addWidget(rSpinBox, 4, 1);
	controls->addWidget(rSlider, 5, 0);
}
