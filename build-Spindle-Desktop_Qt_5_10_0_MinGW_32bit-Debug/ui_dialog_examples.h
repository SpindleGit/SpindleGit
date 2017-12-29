/********************************************************************************
** Form generated from reading UI file 'dialog_examples.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EXAMPLES_H
#define UI_DIALOG_EXAMPLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_examples
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cansel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Dialog_examples)
    {
        if (Dialog_examples->objectName().isEmpty())
            Dialog_examples->setObjectName(QStringLiteral("Dialog_examples"));
        Dialog_examples->resize(533, 268);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog_examples->sizePolicy().hasHeightForWidth());
        Dialog_examples->setSizePolicy(sizePolicy);
        Dialog_examples->setMinimumSize(QSize(320, 240));
        Dialog_examples->setBaseSize(QSize(320, 240));
        widget = new QWidget(Dialog_examples);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 520, 242));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(340, 200));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 15, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(widget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout->addWidget(pushButton_ok);

        pushButton_cansel = new QPushButton(widget);
        pushButton_cansel->setObjectName(QStringLiteral("pushButton_cansel"));

        horizontalLayout->addWidget(pushButton_cansel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog_examples);

        QMetaObject::connectSlotsByName(Dialog_examples);
    } // setupUi

    void retranslateUi(QDialog *Dialog_examples)
    {
        Dialog_examples->setWindowTitle(QApplication::translate("Dialog_examples", "\320\222\321\213\320\261\320\270\321\200\320\270\321\202\320\265 \320\277\321\200\320\270\320\274\320\265\321\200", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Dialog_examples", "1.     \320\237\320\276\320\264\321\201\321\207\320\265\321\202 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \320\261\321\203\320\272\320\262 \320\262 \321\201\320\273\320\276\320\262\320\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Dialog_examples", "2.     \320\237\320\265\321\200\320\265\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\261\321\203\320\272\320\262 \320\262 \321\201\320\273\320\276\320\262\320\265 (\321\206\320\270\320\272\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\201\320\264\320\262\320\270\320\263 \320\262\320\277\321\200\320\260\320\262\320\276)", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Dialog_examples", "3.     \320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214, \321\217\320\262\320\273\321\217\320\265\321\202\321\201\321\217 \320\273\320\270 \321\201\320\273\320\276\320\262\320\276 \"\320\277\320\265\321\200\320\265\320\262\320\265\321\200\321\202\321\213\321\210\320\265\320\274\"", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Dialog_examples", "4.     \320\237\320\265\321\207\320\260\321\202\321\214 \320\262\321\201\320\265\321\205 \320\264\320\265\320\273\320\270\321\202\320\265\320\273\320\265\320\271 \320\275\320\260\321\202\321\203\321\200\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260 A", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Dialog_examples", "5.     \320\237\320\265\321\207\320\260\321\202\321\214 \320\262\321\201\320\265\321\205 \321\201\320\276\320\262\320\265\321\200\321\210\320\265\320\275\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\264\320\276 10000", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("Dialog_examples", "6.     \320\237\320\265\321\207\320\260\321\202\321\214 \320\262\321\201\320\265\321\205 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\264\320\276 500", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("Dialog_examples", "7.     \320\237\320\276\320\264\321\201\321\207\320\265\321\202 \321\201\321\203\320\274\320\274\321\213 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\276\320\264\320\275\320\276\320\274\320\265\321\200\320\275\320\276\320\263\320\276 \320\274\320\260\321\201\321\201\320\270\320\262\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("Dialog_examples", "8.     \320\237\320\276\320\264\321\201\321\207\320\265\321\202 \321\201\321\203\320\274\320\274\321\213 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\264\320\262\321\203\321\205\320\274\320\265\321\200\320\275\320\276\320\263\320\276 \320\274\320\260\321\201\321\201\320\270\320\262\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("Dialog_examples", "9.     \320\237\320\276\320\270\321\201\320\272 \320\274\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\265?", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("Dialog_examples", "10.   \320\237\320\265\321\207\320\260\321\202\321\214 \320\262\321\201\320\265\321\205 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 \320\270\320\267 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\260 C...D", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("Dialog_examples", "11.   \320\246\320\270\320\272\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \321\201\320\264\320\262\320\270\320\263 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\201\321\201\320\270\320\262\320\260 \320\262\320\277\321\200\320\260\320\262\320\276", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        pushButton_ok->setText(QApplication::translate("Dialog_examples", "\320\236\320\232", nullptr));
        pushButton_cansel->setText(QApplication::translate("Dialog_examples", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_examples: public Ui_Dialog_examples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EXAMPLES_H
