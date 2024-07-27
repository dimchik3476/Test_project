#ifndef UDPGET_H
#define UDPGET_H

#include <QObject>
#include <QUdpSocket>

class UDPGet : public QObject
{
    Q_OBJECT
public:
    explicit UDPGet(QObject *parent = 0);

signals:

public slots:
    QByteArray ReadingData();

private:
    QUdpSocket *socket;
};

#endif // UDPGET_H
