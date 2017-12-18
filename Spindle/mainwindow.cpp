#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsPixmapItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene;
    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

    MoveItem *item = new MoveItem();        // Создаём графический элемента
       item->setPos(100,    // Устанавливаем случайную позицию элемента
                   200);
       scene->addItem(item);   // Добавляем элемент на графическую сцену
    QImage image("/icon/icon_open.png");
   // GraphicsPixmapItem item( QPixmap::fromImage(image));
     //   scene->addItem(&item);
}

MainWindow::~MainWindow()
{
    delete ui;
}
