#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "localserver.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mLocalServer = new LocalServer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botonIniciar_clicked()
{
    if(!mLocalServer->listen("Servidor")){
        QMessageBox::critical(this,"Error", mLocalServer->errorString());}else{
    QMessageBox::information(this,"Servidor", "Servidor iniciado ...");
    }
}

void MainWindow::on_botonSalir_clicked()
{
    close();

}

void MainWindow::on_botonEnviar_clicked()
{
    mLocalServer->enviar(ui->mensaje->text());
}
