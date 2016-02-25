#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include <QMenuBar>
#include <QWidget>

class Menu : public QWidget
{
	Q_OBJECT
public:
	explicit Menu( QWidget *parent = 0 );
	~Menu();
//	QMenu getMenu();
//private:
//	QMenu *customMenu;

};

#endif // MENU_H
