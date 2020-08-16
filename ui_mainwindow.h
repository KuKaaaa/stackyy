/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Add_Files;
    QAction *action_Save;
    QAction *action_Quit;
    QAction *action_Help;
    QAction *action_Tip_of_the_day;
    QAction *action_About_Stackyy;
    QAction *action_Website;
    QAction *action_Sources;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *stackButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_IMG;
    QGridLayout *gridLayout_2;
    QLabel *label_IMG;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menu_About;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: #BFBFBF;"));
        action_Add_Files = new QAction(MainWindow);
        action_Add_Files->setObjectName(QString::fromUtf8("action_Add_Files"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        action_Tip_of_the_day = new QAction(MainWindow);
        action_Tip_of_the_day->setObjectName(QString::fromUtf8("action_Tip_of_the_day"));
        action_About_Stackyy = new QAction(MainWindow);
        action_About_Stackyy->setObjectName(QString::fromUtf8("action_About_Stackyy"));
        action_Website = new QAction(MainWindow);
        action_Website->setObjectName(QString::fromUtf8("action_Website"));
        action_Sources = new QAction(MainWindow);
        action_Sources->setObjectName(QString::fromUtf8("action_Sources"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background-color:#222222;\n"
"}\n"
"\n"
"#frame{\n"
"background-color:#202020;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 5, -1);
        stackButton = new QPushButton(centralwidget);
        stackButton->setObjectName(QString::fromUtf8("stackButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(12);
        stackButton->setFont(font);
        stackButton->setAutoDefault(false);
        stackButton->setFlat(false);

        gridLayout->addWidget(stackButton, 2, 0, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_IMG = new QWidget();
        scrollAreaWidgetContents_IMG->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_IMG"));
        scrollAreaWidgetContents_IMG->setGeometry(QRect(0, 0, 1263, 596));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_IMG);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(9);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_IMG = new QLabel(scrollAreaWidgetContents_IMG);
        label_IMG->setObjectName(QString::fromUtf8("label_IMG"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Impact"));
        font1.setPointSize(12);
        label_IMG->setFont(font1);
        label_IMG->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_IMG, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_IMG);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(100);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_About = new QMenu(menubar);
        menu_About->setObjectName(QString::fromUtf8("menu_About"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menubar->addAction(menu_About->menuAction());
        menu_File->addAction(action_Add_Files);
        menu_File->addAction(action_Save);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Help->addAction(action_Help);
        menu_Help->addSeparator();
        menu_Help->addAction(action_Tip_of_the_day);
        menu_About->addAction(action_About_Stackyy);
        menu_About->addSeparator();
        menu_About->addAction(action_Website);
        menu_About->addAction(action_Sources);

        retranslateUi(MainWindow);
        QObject::connect(action_Add_Files, SIGNAL(triggered()), label_IMG, SLOT(clear()));

        stackButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Add_Files->setText(QApplication::translate("MainWindow", "&Add Files", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Add_Files->setShortcut(QApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
        action_Save->setText(QApplication::translate("MainWindow", "&Save...", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        action_Quit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Alt+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Help->setText(QApplication::translate("MainWindow", "&Help", nullptr));
        action_Tip_of_the_day->setText(QApplication::translate("MainWindow", "&Tip of the day", nullptr));
        action_About_Stackyy->setText(QApplication::translate("MainWindow", "&About Stackyy", nullptr));
        action_Website->setText(QApplication::translate("MainWindow", "&Website", nullptr));
        action_Sources->setText(QApplication::translate("MainWindow", "&Sources", nullptr));
        stackButton->setText(QApplication::translate("MainWindow", "STACK!", nullptr));
        label_IMG->setText(QApplication::translate("MainWindow", "Please select images", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
