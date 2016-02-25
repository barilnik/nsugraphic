#include "menu.h"

//QMenu *customMenu;

Menu::Menu( QWidget *parent ) : QWidget( parent )
{
	QMenu *customMenu = new QMenu( tr( "File" ), this );
	customMenu->addAction( tr( "&Save" ) );
	customMenu->addAction( tr( "&Load" ) );
}

Menu::~Menu()
{

}

//QMenu getMenu()
//{
//	return &customMenu;
//}
