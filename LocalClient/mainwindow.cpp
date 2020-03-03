#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLocalSocket>
#include "algdijkstra.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mSocket = new QLocalSocket(this);

    connect(mSocket, &QLocalSocket::readyRead,[&](){
        QTextStream T(mSocket);
        QString solicitud = (T.readAll());
        ui->listWidget->addItem(solicitud);
        if (solicitud == "12"){
            inicio=0;
            dijkstra->final =1;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "13"){
            inicio=0;
            dijkstra->final =2;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "14"){
            inicio=0;
            dijkstra->final =3;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "15"){
            inicio=0;
            dijkstra->final =4;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "21"){
            inicio=1;
            dijkstra->final =0;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "23"){
            inicio=1;
            dijkstra->final =2;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "24"){
            inicio=1;
            dijkstra->final =3;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "25"){
            inicio=1;
            dijkstra->final =4;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "31"){
            inicio=2;
            dijkstra->final =0;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "32"){
            inicio=2;
            dijkstra->final =1;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "34"){
            inicio=2;
            dijkstra->final =3;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "35"){
            inicio=2;
            dijkstra->final =4;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "41"){
            inicio=3;
            dijkstra->final =0;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "42"){
            inicio=3;
            dijkstra->final =1;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "43"){
            inicio=3;
            dijkstra->final =2;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "45"){
            inicio=3;
            dijkstra->final =4;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "51"){
            inicio=4;
            dijkstra->final =0;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "52"){
            inicio=4;
            dijkstra->final =1;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "53"){
            inicio=4;
            dijkstra->final =2;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }
        if (solicitud == "54"){
            inicio=4;
            dijkstra->final =3;
            dijkstra->dijkstra(dijkstra->G,5,inicio );
            QString *rutaFinal = dijkstra->ruta;
            ui->listWidget->addItem(*rutaFinal);
        }

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_conectar_clicked()
{
    mSocket->connectToServer("Servidor");
    dijkstra->dijkstra(dijkstra->G,5,1);

}



void MainWindow::on_quitar_clicked()
{
    close();
}
