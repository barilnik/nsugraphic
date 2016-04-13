#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};*/
#include <QMainWindow>
#include <QString>
#include <QFileDialog>
#include "mainwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    MainWidget *mainWidget;
signals:
    void dataChanged(QMap<QString, QString> map);
public slots:
    void save();
    void load();
};


#endif // MAINWINDOW_H
