#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QHBoxLayout>
#include <QGroupBox>

#include "contrlospanel.h"

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board( QWidget *parent = 0 );
    void createPanels();
    ~Board();
private:
    QHBoxLayout *panelsLayout;
    //QGroupBox *drawPanelBox;
    //QGroupBox *controlBox;
    ContrlosPanel *controlsPanel;
};

#endif // BOARD_H
