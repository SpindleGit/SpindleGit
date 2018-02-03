#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <moveitem.h>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDrag>
#include <magicscene.h>
#include <QAbstractItemView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_open_triggered();

    void on_action_examples_triggered();

    void on_action_exit_changed();

    void on_action_exit_triggered();

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);


private:
    Ui::MainWindow *ui;
    MagicScene *scene;
    QPoint m_dragStart;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MAINWINDOW_H
