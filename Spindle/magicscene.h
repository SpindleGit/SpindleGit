#ifndef MAGICSCENE_H
#define MAGICSCENE_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsView>

class MagicScene : public QGraphicsScene
{
public:
    MagicScene(QObject *parent = 0);
protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event);
    void dragMoveEvent(QGraphicsSceneDragDropEvent *event);
    void dropEvent(QGraphicsSceneDragDropEvent *event);
};

#endif // MAGICSCENE_H
