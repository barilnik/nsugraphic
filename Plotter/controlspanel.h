#ifndef CONTROLSPANEL_H
#define CONTROLSPANEL_H

#include <QWidget>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include "vector.h"

class ControlsPanel : public QGroupBox
{
    Q_OBJECT

    public:
        ControlsPanel(QWidget *parent = 0, const int &x1 = -10, const int &y1 = 0, const int &x2 = 10, const int &y2 = 0, const int &r = 10);
        ~ControlsPanel();
        QMap<QString, QString>* getData();
    signals:
        void rChanged(const int&);
        void x1Changed(const int&);
        void y1Changed(const int&);
        void x2Changed(const int&);
        void y2Changed(const int&);
    public slots:
        void changeR(const int&);
        void changeX1(const int&);
        void changeY1(const int&);
        void changeX2(const int&);
        void changeY2(const int&);
        void changeF1(Vector);
        void changeF2(Vector);
        void changeData(QMap<QString, QString>);
    protected:
        void initElements(const int &x1, const int &y1, const int &x2, const int &y2, const int &r);
        QLabel* textFieldInit(const char *str);
        QSpinBox* spinBoxInit(const int &min, const int &max, const int &current);
        QSlider* sliderInint(const int &min, const int &max, const int &current);
    private:
        QGridLayout *controls;
        QSlider *x1Slider;
        QSlider *y1Slider;
        QSlider *x2Slider;
        QSlider *y2Slider;
        QSlider *rSlider;
        QSpinBox *x1SpinBox;
        QSpinBox *y1SpinBox;
        QSpinBox *x2SpinBox;
        QSpinBox *y2SpinBox;
        QSpinBox *rSpinBox;
};

#endif // CONTROLSPANEL_H
