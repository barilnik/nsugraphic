#ifndef WIDGETVALUE_H
#define WIDGETVALUE_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QGridLayout>

class GroupWidgets : public QWidget
{
    Q_OBJECT
public:
    explicit GroupWidgets( QWidget *parent = 0 );
    void setDefaults( QString titleText, int minValue,int maxValue, int defaultValue );
    ~GroupWidgets();
    int getValueSlider();
    int getValueSpinBox();
signals:
    void valueChanged( int value );
public slots:
    void setValue( int value );
private:
    QLabel *title;
    QSpinBox *spinBox;
    QSlider *slider;
};

#endif // WIDGETVALUE_H
