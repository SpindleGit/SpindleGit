#include "mainwindow.h"
#include "dialog_examples.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
  //  Dialog_examples d;
   // d.show();


    return a.exec();
}
