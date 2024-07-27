#include "mainwindow.h"
#include <QUdpSocket>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << QHostAddress::LocalHost;
    MainWindow w;
    w.show();
    return a.exec();
}
