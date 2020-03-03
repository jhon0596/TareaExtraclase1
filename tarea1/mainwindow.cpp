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

    if(ui->lineEditNI->text() == "1" && ui->lineEditNF->text() == "2" ){
        mLocalServer->enviar("12");
    }
    if(ui->lineEditNI->text() == "1" && ui->lineEditNF->text() == "3" ){
        mLocalServer->enviar("13");
    }
    if(ui->lineEditNI->text() == "1" && ui->lineEditNF->text() == "4 "){
        mLocalServer->enviar("14");
    }
    if(ui->lineEditNI->text() == "1" && ui->lineEditNF->text() == "5" ){
        mLocalServer->enviar("5");
    }
    if(ui->lineEditNI->text() == "2" && ui->lineEditNF->text() == "1" ){
        mLocalServer->enviar("21");
    }
    if(ui->lineEditNI->text() == "2" && ui->lineEditNF->text() == "3" ){
        mLocalServer->enviar("23");
    }
    if(ui->lineEditNI->text() == "2" && ui->lineEditNF->text() == "4" ){
        mLocalServer->enviar("24");
    }
    if(ui->lineEditNI->text() == "2" && ui->lineEditNF->text() == "5" ){
        mLocalServer->enviar("25");
    }
    if(ui->lineEditNI->text() == "3" && ui->lineEditNF->text() == "1" ){
        mLocalServer->enviar("31");
    }
    if(ui->lineEditNI->text() == "3" && ui->lineEditNF->text() == "2" ){
        mLocalServer->enviar("32");
    }
    if(ui->lineEditNI->text() == "3" && ui->lineEditNF->text() == "4" ){
        mLocalServer->enviar("34");
    }
    if(ui->lineEditNI->text() == "3" && ui->lineEditNF->text() == "5" ){
        mLocalServer->enviar("35");
    }
    if(ui->lineEditNI->text() == "4" && ui->lineEditNF->text() == "1" ){
        mLocalServer->enviar("41");
    }

    if(ui->lineEditNI->text() == "4" && ui->lineEditNF->text() == "2" ){
        mLocalServer->enviar("42");
    }
    if(ui->lineEditNI->text() == "4" && ui->lineEditNF->text() == "3"){
        mLocalServer->enviar("43");
    }
    if(ui->lineEditNI->text() == "4" && ui->lineEditNF->text() == "5" ){
        mLocalServer->enviar("45");
    }
    if(ui->lineEditNI->text() == "5" && ui->lineEditNF->text() == "1" ){
        mLocalServer->enviar("51");
    }
    if(ui->lineEditNI->text() == "5" && ui->lineEditNF->text() == "2" ){
        mLocalServer->enviar("52");
    }
    if(ui->lineEditNI->text() == "5" && ui->lineEditNF->text() == "3" ){
        mLocalServer->enviar("53");
    }
    if(ui->lineEditNI->text() == "5" && ui->lineEditNF->text() == "4" ){
        mLocalServer->enviar("54");
    }

}
