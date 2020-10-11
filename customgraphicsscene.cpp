#include "customgraphicsscene.h"

customgraphicsscene::customgraphicsscene()
{
    mode = Add;
}

void customgraphicsscene::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if (event->button() == Qt::LeftButton){
        if (mode==Add){
            qDebug() << "Left click in add mode";
            current = new box();
            this->addItem(current);
        }
        if (mode==Edit){
            qDebug() << "Left cick in edit mode";
        }
    }

    QGraphicsScene::mousePressEvent(event);
}

void customgraphicsscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){
    if (!current){
        qDebug() << "Box exists!";
        current->boundingRect().setBottomRight(event->scenePos());
    }
    else{
        qDebug() << "NO CURRENT BOX";
        QGraphicsScene::mouseReleaseEvent(event);
    }
}

void customgraphicsscene::setAddMode(){
    mode = Add;
    qDebug() << "Scene set to Add Mode";
}

void customgraphicsscene::setEditMode(){
    mode = Edit;
    qDebug() << "Scene set to Edit Mode";
}

int customgraphicsscene::getMode(){
    return mode;
}
