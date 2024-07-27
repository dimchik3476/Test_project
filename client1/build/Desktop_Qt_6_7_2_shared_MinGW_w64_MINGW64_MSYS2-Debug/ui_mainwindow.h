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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 532);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 410, 171, 51));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(510, 50, 161, 131));
        label->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(131, 40, 191, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\267\320\265\320\273\320\265\320\275\320\276\320\263\320\276 \320\274\320\260\321\201\320\273\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \320\273\320\270\321\210\320\260\320\271\320\275\320\270\320\272\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\273\320\260\320\262\321\200\320\276\320\262\320\276\320\263\320\276 \320\262\320\265\320\275\320\272\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\207\320\265\321\202\321\213\321\200\320\265\321\205\320\273\320\270\321\201\321\202\320\275\320\276\320\263\320\276 \320\272\320\273\320\265\320\262\320\265\321\200\320\260", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\242\320\270\320\274\321\214\321\217\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\267\320\265\320\273\320\265\320\275\320\276\320\263\320\276 \320\266\321\203\320\272\320\260", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202  \321\202\320\265\320\274\320\275\320\276\320\263\320\276 \320\273\320\265\321\201\320\260", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\267\320\265\320\273\320\265\320\275\320\276\320\271 \320\272\321\200\321\213\321\210\320\270", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "\320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\206\320\262\320\265\321\202\320\270 \320\273\320\265\321\201\320\260", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
