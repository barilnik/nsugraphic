#ifndef PANELS_H
#define PANELS_H

#include <QWidget>
#include <QGridLayout>
class Panels : public QWidget
{
	Q_OBJECT
public:
	Panels();
private:
	QGridLayout *panelsLayout;
};

#endif // PANELS_H