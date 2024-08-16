#include "myudp.h"
#include <iostream>
#include <QUdpSocket>
MyUDP::MyUDP(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress("0.0.0.0"), 55078);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}
void MyUDP::SendData() //отправка данных на сервер
{
    QByteArray data = "DEBUG";
    qDebug() << matrix1.color;
    qDebug() << matrix1.matrix;
    socket->writeDatagram(data, QHostAddress("0.0.0.0"), 5353);
}
void MyUDP::readyRead() //чтение данных с клиента
{
        QByteArray buffer;
        buffer.resize(socket->pendingDatagramSize());

        QHostAddress sender;
        quint16 senderPort;

        socket->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);

        qDebug() << "Message from: " << sender.toString();
        qDebug() << "Message port: " << senderPort;
        qDebug() << "Message: " << buffer;
        std::cout << "succes";
}
QByteArray MyUDP::fromMatrix() //формирование матрицы цвета
{
    QByteArray result;
    size_t size = 36;
    int start = 0, end = 256;
    for (size_t i = 0; i != size; ++i)
    {
        for  (size_t j = 0; j != size; ++j)
        {
            int el = std::rand() % (start - end + 1) + start;
            QByteArray rel;
            rel = rel.setNum(el);
            result += rel;
            result += ' ';
        }
        result += ":";
    }
    return result;
}
