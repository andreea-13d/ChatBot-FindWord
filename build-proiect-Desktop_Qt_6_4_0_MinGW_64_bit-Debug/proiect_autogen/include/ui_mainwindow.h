/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuChatBot;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 800);
        MainWindow->setMinimumSize(QSize(760, 548));
        MainWindow->setToolTipDuration(2);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 190, 300, 70));
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setEnabled(true);
        pushButton_1->setGeometry(QRect(350, 270, 100, 24));
        pushButton_1->setMouseTracking(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 40, 500, 100));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 150, 400, 35));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 320, 301, 35));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 400, 150, 25));
        pushButton_2->setCheckable(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(325, 400, 150, 25));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(500, 400, 150, 25));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(150, 450, 150, 25));
        pushButton_5->setCheckable(false);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(325, 450, 150, 25));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(500, 450, 150, 25));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(150, 500, 150, 25));
        pushButton_8->setCheckable(false);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(325, 500, 150, 25));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(500, 500, 150, 25));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(150, 550, 150, 25));
        pushButton_11->setCheckable(false);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(325, 550, 150, 25));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(500, 550, 150, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(620, 150, 141, 181));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuChatBot = new QMenu(menubar);
        menuChatBot->setObjectName("menuChatBot");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuChatBot->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "Cauta", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:700; color:#ffaa00;\">Charlotte</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#5587c8;\">Introduceti cuvantul sau cuvintele cheie</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#5587c8;\">Rezultat</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 5", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 10", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 11", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Deschide cursul 12", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Echipa:</span></p><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Schmidt Andrei-Cosmin</span></p><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Dinu Diana-Andreea</span></p><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Oancea Beatrice</span></p><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Dima Razvan Paul</span></p><p align=\"center\"><span style=\" font-weight:700; font-style:italic;\">Lascu Mihnea Gabriel</span></p></body></html>", nullptr));
        menuChatBot->setTitle(QCoreApplication::translate("MainWindow", "ChatBot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
