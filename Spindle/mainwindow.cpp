#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_examples.h"
#include <QGraphicsPixmapItem>
#include <QFile>
#include <QMessageBox>
#include <QStringList>
#include <QFileDialog>

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

    //задание размеров объектов items
    QVector<QSize*> PicSize(4);// размеры объектов items
    PicSize[0]= new QSize(200,300);
    PicSize[1]= new QSize(200,300);
    PicSize[2]= new QSize(150,250);
    PicSize[3]= new QSize(50,50);

    //адресс директории с png items
    const QString url_folder=":/resources/images/items/";
    // вектор адресов подгружаемых png
    QVector<QString> pics{url_folder+"01.png",
                          url_folder+"02.png",
                          url_folder+"03.png",
                          url_folder+"04.png"};

// выбор картинки items
    QPixmap p("");
    int control=0;
    switch (control) {
    case 0:p=QPixmap(pics[0]);
        p = p.scaled(*PicSize[0],Qt::KeepAspectRatio);
        break;
    case 1:p=QPixmap(pics[1]);
        p = p.scaled(*PicSize[1],Qt::KeepAspectRatio);
        break;
    case 2:p=QPixmap(pics[2]);
        p = p.scaled(*PicSize[2],Qt::KeepAspectRatio);
        break;
    case 3:p=QPixmap(pics[3]);
        p = p.scaled(*PicSize[3],Qt::KeepAspectRatio);
        break;
    default:
        break;
    }
  ////////////////////////

   MoveItem *item = new MoveItem(p);        // Создаём графический элемента
      item->setPos(100,200);    // Устанавливаем позицию элемента
      item->setTransformationMode(Qt::SmoothTransformation);
     scene->addItem(item);   // Добавляем элемент на графическую сцену
  MoveItem *item2 = new MoveItem(p);        // Создаём графический элемента
        item2->setPos(100,200);    // Устанавливаем позицию элемента
        item2->setTransformationMode(Qt::SmoothTransformation);
       scene->addItem(item2);   // Добавляем элемент на графическую сцену



}

MainWindow::~MainWindow()
{
    delete ui;
}

// Открытие файла
void MainWindow::on_action_open_triggered()
{
   QString fileName_DATA = QFileDialog::getOpenFileName(this, tr("Открыть файл"),"/home",tr("DATA (*.DATA)"));
        QFile file(fileName_DATA);
        if (!file.open(QIODevice::ReadOnly)) {

            return;
        }
}

void MainWindow::on_action_examples_triggered()
{
   // Dialog_examples d;
    //d.show();
}
