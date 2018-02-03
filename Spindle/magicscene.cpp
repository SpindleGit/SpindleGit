#include "magicscene.h"

MagicScene::MagicScene(QObject *parent): QGraphicsScene(parent)
{

    qDebug() << "Creating scene...";
}


void MagicScene::dragEnterEvent(QGraphicsSceneDragDropEvent *event)
{
       qDebug() << "Scene: Dragged";
       event->acceptProposedAction();
}

void MagicScene::dragMoveEvent(QGraphicsSceneDragDropEvent *event)
{
    event->acceptProposedAction();
}

void MagicScene::dropEvent(QGraphicsSceneDragDropEvent *event)
{
    qDebug() << "Scene: Dropped";
    event->acceptProposedAction();
}
