#include "mainwindow.h"
#include <QUdpSocket>
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include "myudp.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MyUDP client;
    client.SendData();
    ui -> label_2 -> setText(client.fromMatrix());
}



void MainWindow::on_comboBox_activated(int index)
{
    changeIndex(index);
}

void MainWindow::changeIndex(int a) {
    a++;
    ui -> label -> setStyleSheet("image: url(:/img/images/png" + QString::number(a) + ".png);");
}


void MainWindow::on_label_2_linkActivated(const QString &link)
{

}
