#include "moveitem.h"

MoveItem::MoveItem(QPixmap &p, QObject *parent ) :
    QObject(parent), QGraphicsPixmapItem(p)
{

}

MoveItem::~MoveItem()
{

}
/*
QRectF MoveItem::boundingRect() const
{
    return QRectF (-30,-30,60,60);
}

void MoveItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->setPen(Qt::black);
    //painter->setBrush(Qt::green);
    //painter->drawRect(-30,-30,60,60);

    //QImage image(":/resources/images/icon/icon_add.png");
    //QPixmap p;
    //p.fromImage(image);
    //painter->drawImage((-30,-30,1,1,1,1,image);
    //painter->drawPixmap(-30,-30,p);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}
*/
void MoveItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Устанавливаем позицию графического элемента
     * в графической сцене, транслировав координаты
     * курсора внутри графического элемента
     * в координатную систему графической сцены
     * */
    this->setPos(mapToScene(event->pos()));
}

void MoveItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    /* При нажатии мышью на графический элемент
     * заменяем курсор на руку, которая держит этот элемента
     * */
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);
}

void MoveItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    /* При отпускании мышью элемента
     * заменяем на обычный курсор стрелку
     * */
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}
