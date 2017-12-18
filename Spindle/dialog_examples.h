#ifndef DIALOG_EXAMPLES_H
#define DIALOG_EXAMPLES_H

#include <QDialog>

namespace Ui {
class Dialog_examples;
}

class Dialog_examples : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_examples(QWidget *parent = 0);
    ~Dialog_examples();

private slots:

    void on_pushButton_ok_clicked();

private:
    Ui::Dialog_examples *ui;
};

#endif // DIALOG_EXAMPLES_H
