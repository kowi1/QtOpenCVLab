/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionFile;
    QAction *actionAdd_URL;
    QWidget *centralWidget;
    QPlainTextEdit *textConsole_3;
    QLabel *lblProcessed_3;
    QLabel *lblOriginal_3;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QMenu *menuWebcam;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        actionAdd_URL = new QAction(MainWindow);
        actionAdd_URL->setObjectName(QStringLiteral("actionAdd_URL"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textConsole_3 = new QPlainTextEdit(centralWidget);
        textConsole_3->setObjectName(QStringLiteral("textConsole_3"));
        textConsole_3->setGeometry(QRect(340, 560, 441, 51));
        textConsole_3->setReadOnly(true);
        lblProcessed_3 = new QLabel(centralWidget);
        lblProcessed_3->setObjectName(QStringLiteral("lblProcessed_3"));
        lblProcessed_3->setGeometry(QRect(350, 90, 471, 441));
        lblProcessed_3->setAutoFillBackground(true);
        lblOriginal_3 = new QLabel(centralWidget);
        lblOriginal_3->setObjectName(QStringLiteral("lblOriginal_3"));
        lblOriginal_3->setGeometry(QRect(1509, 30, 151, 500));
        lblOriginal_3->setAutoFillBackground(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 789, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        menuWebcam = new QMenu(menuMain);
        menuWebcam->setObjectName(QStringLiteral("menuWebcam"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMain->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMain->addAction(actionExit);
        menuMain->addAction(actionFile);
        menuMain->addAction(menuWebcam->menuAction());
        menuWebcam->addAction(actionAdd_URL);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QtVisionLab", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About ComputerVision", nullptr));
        actionFile->setText(QApplication::translate("MainWindow", "File", nullptr));
        actionAdd_URL->setText(QApplication::translate("MainWindow", "Add Url", nullptr));
        lblProcessed_3->setText(QString());
        lblOriginal_3->setText(QString());
        menuMain->setTitle(QApplication::translate("MainWindow", "Main", nullptr));
        menuWebcam->setTitle(QApplication::translate("MainWindow", "Webcam", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
