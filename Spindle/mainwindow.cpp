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

    QPixmap p(":/resources/images/icon/icon_add.png");
   MoveItem *item = new MoveItem(p);        // Создаём графический элемента
      item->setPos(100,200);    // Устанавливаем позицию элемента
     scene->addItem(item);   // Добавляем элемент на графическую сцену




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
