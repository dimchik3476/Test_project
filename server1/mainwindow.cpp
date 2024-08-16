#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udpget.h"
#include <QPixmap>
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


void MainWindow::on_pushButton_clicked() //временная кнопка, отвечающая за вывод картинки
{
    UDPGet client;
    client.GetMatrix();
    QPixmap pix;
    pix = QPixmap::fromImage(client.ToPicture());
    ui -> CollorPicture -> setPixmap(pix); //matrix output
}
