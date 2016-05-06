#ifndef MAINWIDGET_H
#define MAINWIDGET_H


#include <QWidget>
#include <QGridLayout>
#include <QMenuBar>
#include <QGroupBox>
#include "bernoullilemniscate.h"
#include "drawpanel.h"
#include "controlspanel.h"

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    QMap<QString, QString>* getData();
signals:
    void dataChanged(QMap<QString, QString> map);
public slots:
    void changeData(QMap<QString, QString> map);
private:
    QGridLayout *layout;
    ControlsPanel *controls;
};

#endif // MAINWIDGET_H
