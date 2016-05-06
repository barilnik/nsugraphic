#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QGridLayout>

class ControlPanel : public QWidget
{
    Q_OBJECT
public:
    explicit ControlPanel( QWidget *parent = 0 );
    void setDefaults( QString titleText, int minValue, int maxValue, int defaultValue );
    int getValue();
signals:
    void valueChanged(int value);
public slots:
    void setValue( int value );
private:
    QLabel *label;
    QSpinBox *spinBox;
    QSlider *slider;
};

#endif // CONTROLPANEL_H
