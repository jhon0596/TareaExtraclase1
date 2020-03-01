#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLocalSocket>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mSocket = new QLocalSocket(this);

    connect(mSocket, &QLocalSocket::readyRead,[&](){
        QTextStream T(mSocket);
        ui->listWidget->addItem(T.readAll());
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_conectar_clicked()
{
    mSocket->connectToServer("Servidor");
}



void MainWindow::on_quitar_clicked()
{
    close();
}
