#include "myudp.h"
#include <iostream>
#include <QUdpSocket>
MyUDP::MyUDP(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost, 1111);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}
void MyUDP::SendData()
{
    QByteArray data = "Hello";
    qDebug() << fromMatrix();
    socket->writeDatagram(fromMatrix(), QHostAddress::LocalHost,  9999);
}
void MyUDP::readyRead()
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
QByteArray MyUDP::fromMatrix()
{
    QByteArray result;
    size_t size = 36;
    int start = 0, end = 256;
    for (size_t i = 0; i != size; ++i) //need to correct 10 to 36
    {
        for  (size_t j = 0; j != size; ++j)
        {
            int el = std::rand() % (start - end + 1) + start;
            QByteArray rel;
            rel = rel.setNum(el);
            switch(rel.size())
            {
                case 1:
                    result = result + "  " + rel;
                    break;
                case 2:
                    result = result + ' ' + rel;
                    break;
                default:
                    result += rel;
                    break;
            }
            result += ' ';
        }
        result += "\n";
    }
    return result;
}
