#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>
#include <QAction>

class Menu : public QWidget
{
	Q_OBJECT
public:
	explicit Menu( QWidget *parent = 0 );
    void createActions();
	~Menu();
private slots:
    void saveSettings();
    void loadSettings();
private:
    QAction *saveAction;
    QAction *loadAction;

};

#endif // MENU_H
