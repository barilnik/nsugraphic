#ifndef CONTROLSPANEL_H
#define CONTROLSPANEL_H

#include <QGridLayout>
#include <QGroupBox>
#include <QSpinBox>
#include <QSlider>
#include <QLabel>
#include <QObject>

class ControlsPanel : public QGroupBox
{
	Q_OBJECT

public:
	ControlsPanel( QWidget *parent = 0, const int &x = 0, const int &y = 0, const int &r = 50 );
	~ControlsPanel();
	QMap< QString, QString >* getData();
signals:
	void rChanged( const int &r );
	void xChanged( const int &x );
	void yChanged( const int &y );
public slots:
	void changeR( const int &r );
	void changeX( const int &x );
	void changeY( const int &y );
	void changeData( QMap< QString, QString > );
protected:
	void setWidgets( const int &x, const int &y, const int &r );
	QLabel* textFieldInit( const char *str );
	QSpinBox* spinBoxInit( const int &min, const int &max, const int &current );
	QSlider* sliderInint( const int &min, const int &max, const int &current );
private:
	QGridLayout *controlsLayout;
	QSlider *xSlider;
	QSlider *ySlider;
	QSlider *rSlider;
	QSpinBox *xSpinBox;
	QSpinBox *ySpinBox;
	QSpinBox *rSpinBox;
};

#endif // CONTROLSPANEL_H
