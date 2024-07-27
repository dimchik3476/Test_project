#ifndef MYUDP_H
#define MYUDP_H

#include <QObject>
#include <QWidget>
#include <QUdpSocket>

class MyUDP : public QObject
{
    Q_OBJECT
public:
    explicit MyUDP(QObject *parent = 0);
    QByteArray fromMatrix();

signals:

public slots:
    void readyRead();

public slots:
  void SendData(); // sending data

private:
    QUdpSocket *socket;

};

#endif // MYUDP_H
