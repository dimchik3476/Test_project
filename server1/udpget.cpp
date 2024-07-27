#include "udpget.h"
#include <iostream>
#include <QUdpSocket>

UDPGet::UDPGet(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost, 9999);
    connect(socket, SIGNAL(readyRead()), this, SLOT(ReadingData()));
}
QByteArray UDPGet::ReadingData()
{
        QHostAddress sender;
        quint16 senderPort;
        QByteArray buffer;
        buffer.resize(socket->pendingDatagramSize());

        socket->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);

        qDebug() << "Message from: " << sender.toString();
        qDebug() << "Message port: " << senderPort;
        qDebug() << "Message: " << buffer.data();
        return buffer;
}
