#ifndef CUSTOMGRAPHICSSCENE_H
#define CUSTOMGRAPHICSSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QList>

#include "box.h"

class customgraphicsscene : public QGraphicsScene
{
public:
    customgraphicsscene();

    //Methods
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
//    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void setAddMode();
    void setEditMode();
    int getMode();

    //Variables
    enum coremode {Add, Edit}mode;
    QList<box> *boxlist;
    box *current = NULL;
};

#endif // CUSTOMGRAPHICSSCENE_H
