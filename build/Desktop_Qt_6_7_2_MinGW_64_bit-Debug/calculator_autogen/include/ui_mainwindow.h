/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *result;
    QLineEdit *aff;
    QPushButton *b1;
    QPushButton *b3;
    QPushButton *b_plus;
    QPushButton *b2;
    QPushButton *b_moin;
    QPushButton *b6;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b_fois;
    QPushButton *b9;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b_sur;
    QPushButton *b0;
    QPushButton *b_racine;
    QPushButton *b_para;
    QPushButton *b_vir;
    QLabel *equa;
    QPushButton *b_negative;
    QPushButton *b_ac;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(315, 420);
        MainWindow->setStyleSheet(QString::fromUtf8("color"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 0, 81, 31));
        label_3->setTextFormat(Qt::TextFormat::MarkdownText);
        result = new QPushButton(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(240, 330, 51, 41));
        result->setStyleSheet(QString::fromUtf8("background-color : blue;"));
        aff = new QLineEdit(centralwidget);
        aff->setObjectName("aff");
        aff->setGeometry(QRect(30, 80, 261, 41));
        b1 = new QPushButton(centralwidget);
        b1->setObjectName("b1");
        b1->setGeometry(QRect(30, 130, 51, 41));
        b1->setAutoFillBackground(false);
        b1->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b3 = new QPushButton(centralwidget);
        b3->setObjectName("b3");
        b3->setGeometry(QRect(170, 130, 51, 41));
        b3->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b_plus = new QPushButton(centralwidget);
        b_plus->setObjectName("b_plus");
        b_plus->setGeometry(QRect(240, 130, 51, 41));
        b2 = new QPushButton(centralwidget);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(100, 130, 51, 41));
        b2->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b_moin = new QPushButton(centralwidget);
        b_moin->setObjectName("b_moin");
        b_moin->setGeometry(QRect(240, 180, 51, 41));
        b6 = new QPushButton(centralwidget);
        b6->setObjectName("b6");
        b6->setGeometry(QRect(170, 180, 51, 41));
        b6->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b4 = new QPushButton(centralwidget);
        b4->setObjectName("b4");
        b4->setGeometry(QRect(30, 180, 51, 41));
        b4->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b5 = new QPushButton(centralwidget);
        b5->setObjectName("b5");
        b5->setGeometry(QRect(100, 180, 51, 41));
        b5->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b_fois = new QPushButton(centralwidget);
        b_fois->setObjectName("b_fois");
        b_fois->setGeometry(QRect(240, 230, 51, 41));
        b9 = new QPushButton(centralwidget);
        b9->setObjectName("b9");
        b9->setGeometry(QRect(170, 230, 51, 41));
        b9->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b7 = new QPushButton(centralwidget);
        b7->setObjectName("b7");
        b7->setGeometry(QRect(30, 230, 51, 41));
        b7->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b8 = new QPushButton(centralwidget);
        b8->setObjectName("b8");
        b8->setGeometry(QRect(100, 230, 51, 41));
        b8->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b_sur = new QPushButton(centralwidget);
        b_sur->setObjectName("b_sur");
        b_sur->setGeometry(QRect(240, 280, 51, 41));
        b0 = new QPushButton(centralwidget);
        b0->setObjectName("b0");
        b0->setGeometry(QRect(100, 280, 51, 41));
        b0->setStyleSheet(QString::fromUtf8("background-color : green;"));
        b_racine = new QPushButton(centralwidget);
        b_racine->setObjectName("b_racine");
        b_racine->setGeometry(QRect(100, 330, 51, 41));
        b_para = new QPushButton(centralwidget);
        b_para->setObjectName("b_para");
        b_para->setGeometry(QRect(30, 330, 51, 41));
        b_vir = new QPushButton(centralwidget);
        b_vir->setObjectName("b_vir");
        b_vir->setGeometry(QRect(170, 280, 51, 41));
        equa = new QLabel(centralwidget);
        equa->setObjectName("equa");
        equa->setGeometry(QRect(30, 40, 261, 41));
        b_negative = new QPushButton(centralwidget);
        b_negative->setObjectName("b_negative");
        b_negative->setGeometry(QRect(30, 280, 51, 41));
        b_ac = new QPushButton(centralwidget);
        b_ac->setObjectName("b_ac");
        b_ac->setGeometry(QRect(170, 330, 51, 41));
        b_ac->setStyleSheet(QString::fromUtf8("background-color : red"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 315, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Camculatrice", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        b1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        b1->setShortcut(QCoreApplication::translate("MainWindow", "&", nullptr));
#endif // QT_CONFIG(shortcut)
        b3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        b3->setShortcut(QCoreApplication::translate("MainWindow", "\"", nullptr));
#endif // QT_CONFIG(shortcut)
        b_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        b2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        b2->setShortcut(QCoreApplication::translate("MainWindow", "\303\211", nullptr));
#endif // QT_CONFIG(shortcut)
        b_moin->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        b6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        b6->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        b4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        b4->setShortcut(QCoreApplication::translate("MainWindow", "'", nullptr));
#endif // QT_CONFIG(shortcut)
        b5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        b5->setShortcut(QCoreApplication::translate("MainWindow", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        b_fois->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        b9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        b9->setShortcut(QCoreApplication::translate("MainWindow", "\303\207", nullptr));
#endif // QT_CONFIG(shortcut)
        b7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        b7->setShortcut(QCoreApplication::translate("MainWindow", "\303\210", nullptr));
#endif // QT_CONFIG(shortcut)
        b8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        b8->setShortcut(QCoreApplication::translate("MainWindow", "_", nullptr));
#endif // QT_CONFIG(shortcut)
        b_sur->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        b0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        b0->setShortcut(QCoreApplication::translate("MainWindow", "\303\200", nullptr));
#endif // QT_CONFIG(shortcut)
        b_racine->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        b_para->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        b_vir->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equa->setText(QCoreApplication::translate("MainWindow", "votre equation", nullptr));
        b_negative->setText(QCoreApplication::translate("MainWindow", "-x", nullptr));
        b_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
