#include "mainwindow.h"
#include <QUdpSocket>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << QHostAddress("0.0.0.0");
    MainWindow w;
    w.show();
    return a.exec();
}
