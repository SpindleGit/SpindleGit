/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_save_as;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_magic;
    QAction *action_settings;
    QAction *action_about_us;
    QAction *action_print;
    QAction *action_exit;
    QAction *action_documentation;
    QAction *action_examples;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox_2;
    QWidget *page_type;
    QWidget *page_log_op;
    QWidget *page_2_math_op;
    QWidget *page_op_con;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tap_scheme;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView;
    QWidget *tap_code;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuSpindle;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(818, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 500));
        MainWindow->setBaseSize(QSize(1900, 950));
        MainWindow->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/images/icon/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(30, 30));
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QStringLiteral("action_new"));
        action_new->setCheckable(false);
        action_new->setChecked(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/images/icon/icon_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon1);
        action_new->setShortcutContext(Qt::WindowShortcut);
        action_new->setMenuRole(QAction::TextHeuristicRole);
        action_new->setShortcutVisibleInContextMenu(false);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/images/icon/icon_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon2);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/images/icon/icon_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon3);
        action_save_as = new QAction(MainWindow);
        action_save_as->setObjectName(QStringLiteral("action_save_as"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/images/icon/icon_save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save_as->setIcon(icon4);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName(QStringLiteral("action_undo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/images/icon/icon_undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_undo->setIcon(icon5);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName(QStringLiteral("action_redo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/images/icon/icon_redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_redo->setIcon(icon6);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName(QStringLiteral("action_cut"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/images/icon/icon_cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_cut->setIcon(icon7);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName(QStringLiteral("action_copy"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/images/icon/icon_copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_copy->setIcon(icon8);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName(QStringLiteral("action_paste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/images/icon/icon_paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_paste->setIcon(icon9);
        action_magic = new QAction(MainWindow);
        action_magic->setObjectName(QStringLiteral("action_magic"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/images/icon/icon_code.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_magic->setIcon(icon10);
        action_settings = new QAction(MainWindow);
        action_settings->setObjectName(QStringLiteral("action_settings"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/resources/images/icon/icons_settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_settings->setIcon(icon11);
        action_about_us = new QAction(MainWindow);
        action_about_us->setObjectName(QStringLiteral("action_about_us"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/resources/images/icon/icon_about_us.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_about_us->setIcon(icon12);
        action_print = new QAction(MainWindow);
        action_print->setObjectName(QStringLiteral("action_print"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/resources/images/icon/icon_print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_print->setIcon(icon13);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/resources/images/icon/icon_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon14);
        action_documentation = new QAction(MainWindow);
        action_documentation->setObjectName(QStringLiteral("action_documentation"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/resources/images/icon/icon_documentation.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_documentation->setIcon(icon15);
        action_examples = new QAction(MainWindow);
        action_examples->setObjectName(QStringLiteral("action_examples"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/resources/images/icon/icon_examples.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_examples->setIcon(icon16);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, -1, 0);
        toolBox_2 = new QToolBox(centralWidget);
        toolBox_2->setObjectName(QStringLiteral("toolBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBox_2->sizePolicy().hasHeightForWidth());
        toolBox_2->setSizePolicy(sizePolicy1);
        toolBox_2->setMinimumSize(QSize(300, 0));
        page_type = new QWidget();
        page_type->setObjectName(QStringLiteral("page_type"));
        page_type->setGeometry(QRect(0, 0, 300, 110));
        toolBox_2->addItem(page_type, QString::fromUtf8("\320\242\320\270\320\277\321\213 \320\264\320\260\320\275\320\275\321\213\321\205"));
        page_log_op = new QWidget();
        page_log_op->setObjectName(QStringLiteral("page_log_op"));
        page_log_op->setGeometry(QRect(0, 0, 300, 110));
        toolBox_2->addItem(page_log_op, QString::fromUtf8("\320\233\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270 "));
        page_2_math_op = new QWidget();
        page_2_math_op->setObjectName(QStringLiteral("page_2_math_op"));
        page_2_math_op->setGeometry(QRect(0, 0, 300, 110));
        toolBox_2->addItem(page_2_math_op, QString::fromUtf8("\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270"));
        page_op_con = new QWidget();
        page_op_con->setObjectName(QStringLiteral("page_op_con"));
        page_op_con->setGeometry(QRect(0, 0, 300, 110));
        toolBox_2->addItem(page_op_con, QString::fromUtf8("\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \320\275\320\260\320\264 \320\272\320\276\320\275\321\202\320\265\320\271\320\275\320\265\321\200\320\260\320\274\320\270"));

        verticalLayout_3->addWidget(toolBox_2);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setMinimumSize(QSize(300, 0));

        verticalLayout_3->addWidget(tableWidget);

        verticalLayout_3->setStretch(0, 300);

        horizontalLayout->addLayout(verticalLayout_3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(500, 0));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tap_scheme = new QWidget();
        tap_scheme->setObjectName(QStringLiteral("tap_scheme"));
        horizontalLayout_2 = new QHBoxLayout(tap_scheme);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView = new QGraphicsView(tap_scheme);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout_2->addWidget(graphicsView);

        tabWidget->addTab(tap_scheme, QString());
        tap_code = new QWidget();
        tap_code->setObjectName(QStringLiteral("tap_code"));
        horizontalLayout_3 = new QHBoxLayout(tap_code);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textEdit = new QTextEdit(tap_code);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        textEdit->setFont(font);

        horizontalLayout_3->addWidget(textEdit);

        tabWidget->addTab(tap_code, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 17));
        menuSpindle = new QMenu(menuBar);
        menuSpindle->setObjectName(QStringLiteral("menuSpindle"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(6);
        mainToolBar->setFont(font1);
        mainToolBar->setIconSize(QSize(30, 30));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuSpindle->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuSpindle->addAction(action_new);
        menuSpindle->addAction(action_open);
        menuSpindle->addAction(action_save);
        menuSpindle->addAction(action_save_as);
        menuSpindle->addSeparator();
        menuSpindle->addAction(action_print);
        menuSpindle->addSeparator();
        menuSpindle->addAction(action_exit);
        menu->addAction(action_undo);
        menu->addAction(action_redo);
        menu->addSeparator();
        menu->addAction(action_cut);
        menu->addAction(action_copy);
        menu->addAction(action_paste);
        menu->addSeparator();
        menu->addAction(action_magic);
        menu_3->addAction(action_settings);
        menu_4->addAction(action_examples);
        menu_4->addAction(action_documentation);
        menu_4->addAction(action_about_us);
        mainToolBar->addAction(action_new);
        mainToolBar->addAction(action_open);
        mainToolBar->addAction(action_save);
        mainToolBar->addAction(action_cut);
        mainToolBar->addAction(action_copy);
        mainToolBar->addAction(action_paste);
        mainToolBar->addAction(action_magic);

        retranslateUi(MainWindow);

        toolBox_2->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Spindle", nullptr));
        action_new->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        action_new->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        action_save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        action_save->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        action_save_as->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
#ifndef QT_NO_TOOLTIP
        action_save_as->setToolTip(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_save_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_NO_SHORTCUT
        action_undo->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_undo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        action_redo->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_TOOLTIP
        action_redo->setToolTip(QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_redo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        action_cut->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        action_copy->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        action_paste->setText(QApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        action_magic->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214 ", nullptr));
        action_settings->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        action_about_us->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_print->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
#ifndef QT_NO_SHORTCUT
        action_print->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        action_exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#ifndef QT_NO_SHORTCUT
        action_exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_documentation->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260\321\206\320\270\321\217", nullptr));
        action_examples->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200\321\213 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\276\320\262", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_type), QApplication::translate("MainWindow", "\320\242\320\270\320\277\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_log_op), QApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270 ", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_2_math_op), QApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_op_con), QApplication::translate("MainWindow", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 \320\275\320\260\320\264 \320\272\320\276\320\275\321\202\320\265\320\271\320\275\320\265\321\200\320\260\320\274\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tap_scheme), QApplication::translate("MainWindow", "\320\241\321\205\320\265\320\274\320\260", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">var s:string;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 r:real;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240"
                        "\302\240 i,j,n:integer;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">begin</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 r:=0;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 readln(s);</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 for i:=1 to length(s) do begin</span></p>\n"
"<p st"
                        "yle=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240\302\240\302\240\302\240 n:=0;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240\302\240\302\240\302\240 for j:=1 to length(s) do begin</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 if s[i]=s[j] then inc(n);</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courie"
                        "r New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240\302\240\302\240\302\240 end;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240\302\240\302\240\302\240 r:=r+1/n;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 end;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">\302\240\302\240\302\240 writeln('\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \320\261\321\203"
                        "\320\272\320\262 = ', r:1:0);</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New'; font-size:10pt; color:#000000;\">end.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tap_code), QApplication::translate("MainWindow", "\320\232\320\276\320\264", nullptr));
        menuSpindle->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\222\320\270\320\264", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\270\321\201", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        mainToolBar->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        mainToolBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
