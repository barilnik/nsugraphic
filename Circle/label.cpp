#include "label.h"

Label::Label( QString labelText, QWidget *parent ) : QWidget( parent )
{
    label = new QLabel( this );

    label->setAlignment( Qt::AlignCenter );
    label->setFixedSize( LABEL_WIDTH, LABEL_HEIGHT );
    label->setGeometry(0, 0 * LABEL_HEIGHT, LABEL_WIDTH, LABEL_HEIGHT );
    label->setText( labelText );
}


QLabel *getLabel()
{
    return label;
}
