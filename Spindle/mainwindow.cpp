#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsPixmapItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene;



    scene->setBackgroundBrush(QImage(":/resources/images/backgrounds/01.png"));

    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

   MoveItem *item = new MoveItem();        // Создаём графический элемента
      item->setPos(100,200);    // Устанавливаем позицию элемента
      scene->addItem(item);   // Добавляем элемент на графическую сцену

   //QGraphicsPixmapItem *pixmapItem = new QGraphicsPixmapItem(QPixmap(":/resources/images/icon/icon_add.png"));
   // pixmapItem->setTransformationMode(Qt::SmoothTransformation);
   //scene->addItem(pixmapItem);


}

MainWindow::~MainWindow()
{
    delete ui;
}
