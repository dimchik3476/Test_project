#include "mainwindow.h"
#include <QUdpSocket>
#include <QApplication>
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

