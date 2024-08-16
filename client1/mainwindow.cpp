#include "mainwindow.h"
#include <QUdpSocket>
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include "myudp.h"
QByteArray color1;
MyUDP client;
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
    client.matrix1.matrix= client.fromMatrix();
    client.matrix1.color = client.color1;
    client.SendData();
    ui -> label_2 -> setText(client.matrix1.matrix);
}



void MainWindow::on_comboBox_activated(int index)
{
    changeIndex(index);
}

void MainWindow::changeIndex(int a) //определение признака матрицы
{
    QByteArray color1;
    if (a == 1)
    {
         ui -> label -> setStyleSheet("QLabel { background-color : gray }");
         client.color1 = "gray";
    }
    else if (a == 2)
    {
        ui -> label -> setStyleSheet("QLabel { background-color : green }");
        client.color1 = "green";
    }
}

