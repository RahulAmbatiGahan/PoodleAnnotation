#ifndef BOX_H
#define BOX_H

#include <QGraphicsRectItem>
#include <QString>

class box : public QGraphicsRectItem
{
public:
    box();

private:
    QString classname;
};

#endif // BOX_H
