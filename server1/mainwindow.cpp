#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udpget.h"

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
    UDPGet client;
    ui -> label -> setText(client.ReadingData()); //matrix output
}
