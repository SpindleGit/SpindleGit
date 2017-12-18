#include "dialog_examples.h"
#include "ui_dialog_examples.h"

Dialog_examples::Dialog_examples(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_examples)
{
    ui->setupUi(this);

}

Dialog_examples::~Dialog_examples()
{
    delete ui;
}



void Dialog_examples::on_pushButton_ok_clicked()
{
    //int i = ui->listWidget->currentIndex().data();

}
