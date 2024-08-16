#include "udpget.h"
#include <iostream>
#include <QUdpSocket>
#include <QImage>
#include <QString>
#include <QVector>
UDPGet::UDPGet(QObject *parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress("0.0.0.0"), 5353);
    connect(socket, SIGNAL(readyRead()), this, SLOT(ReadingData()));
}
QByteArray UDPGet::ReadingData() //чтение данных с сервера
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

QImage UDPGet::ToPicture() //функция формирования изображения
{
    QVector<QVector<int>> matrix;
    QString collor;
    collor = "gray"; // указать в скобочках признак цвета (green/gray)
    QImage img(36, 36, QImage::Format_RGB32);
    matrix = GetMatrix();
    if (collor == "green")
    {
        for (size_t i =0; i != 36; ++i)
        {
            for (size_t j = 0; j != 36; ++j)
            {
                QRgb rgb = qRgb(0, matrix[i][j], 0);
                img.setPixel(i, j, rgb);
            }
        }
    }
    else if (collor == "gray")
    {
        for (size_t i =0; i != 36; ++i)
        {
            for (size_t j = 0; j != 36; ++j)
            {
                QRgb rgb = qRgb(matrix[i][j], matrix[i][j], matrix[i][j]);
                img.setPixel(i, j, rgb);
            }
        }
    }
    return img;
}

QVector<QVector<int>> UDPGet::GetMatrix() //временная функция создания матрицы внутри клиента, тк не выходит решить проблему с доставкой данных
{
    QVector<QVector<int>> matr(36);

    size_t size = 36;
    int start = 0, end = 256;
    for (size_t i = 0; i != size; ++i)
    {
        for  (size_t j = 0; j != size; ++j)
        {
            int el = std::rand() % (start - end + 1) + start;
            matr[i].append(el);
        }
        qDebug() << matr[i];
    }
    return matr;
}
