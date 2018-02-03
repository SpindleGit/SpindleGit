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


    //ui->listWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
    //ui->listWidget_2->setDragEnabled(true);
    //ui->listWidget_2->viewport()->setAcceptDrops(true);
   // ui->listWidget_2->setDropIndicatorShown(true);
    //ui->listWidget_2->setDragDropMode(QAbstractItemView::InternalMove);

     //ui->listWidget_2->setDragDropOverwriteMode(true);

    setAcceptDrops(true);


  //Настройки сцены и графического окна

    scene = new MagicScene;
    scene->setBackgroundBrush(QImage(":/resources/images/backgrounds/01.png"));
    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);

  //
/*
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

     p=QPixmap(pics[1]);
             p = p.scaled(*PicSize[1],Qt::KeepAspectRatio);
  MoveItem *item1 = new MoveItem(p);        // Создаём графический элемента
        item1->setPos(100,200);    // Устанавливаем позицию элемента
        item1->setTransformationMode(Qt::SmoothTransformation);
       scene->addItem(item1);   // Добавляем элемент на графическую сцену

       p=QPixmap(pics[2]);
               p = p.scaled(*PicSize[2],Qt::KeepAspectRatio);
  MoveItem *item2 = new MoveItem(p);        // Создаём графический элемента
             item2->setPos(100,200);    // Устанавливаем позицию элемента
             item2->setTransformationMode(Qt::SmoothTransformation);
            scene->addItem(item2);   // Добавляем элемент на графическую сцену

            p=QPixmap(pics[3]);
                    p = p.scaled(*PicSize[3],Qt::KeepAspectRatio);
  MoveItem *item3 = new MoveItem(p);        // Создаём графический элемента
            item3->setPos(100,200);    // Устанавливаем позицию элемента
            item3->setTransformationMode(Qt::SmoothTransformation);
            scene->addItem(item3);   // Добавляем элемент на графическую сцену

*/

}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
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

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    event->acceptProposedAction();
}

void MainWindow::dragLeaveEvent(QDragLeaveEvent *event)
{
    event->accept();
}

void MainWindow::dragMoveEvent(QDragMoveEvent *event)
{
    event->acceptProposedAction();
}


void MainWindow::dropEvent(QDropEvent *event)
{
   QList<QUrl> urls;
   QList<QUrl>::Iterator i;
   urls = event->mimeData()->urls();
   for(i=urls.begin(); i!=urls.end(); ++i)
   {
   }
    event->acceptProposedAction();
}

void MainWindow::mousePressEvent(QGraphicsSceneMouseEvent *event)
 {

 }

void MainWindow::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(
               ( event->buttons() & Qt::LeftButton ) &&
               QApplication::startDragDistance() <= ( event->pos() - m_dragStart ).manhattanLength()
       ) {
           QDrag* drag = new QDrag( this );
           QMimeData* mimeData = new QMimeData;
           Qt::DropAction result = drag->exec( Qt::MoveAction );
            qDebug() << "Drop action result: " << result;
        }
}
void MainWindow::on_action_exit_triggered()
{

}

void MainWindow::on_action_exit_changed()
{

}
