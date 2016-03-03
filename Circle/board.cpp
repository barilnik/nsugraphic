#include "board.h"

//Описание основной сцены
//Создание панелей
Board::Board( QWidget *parent ) : QWidget( parent )
{
    panelsLayout = new QHBoxLayout;
    //controlsPanel = new ContrlosPanel( this );
   // panelsLayout->addWidget( controlsPanel );
}

Board::~Board()
{

}

void Board::createPanels()
{
 //QWidget *widget = new QWidget();
}
