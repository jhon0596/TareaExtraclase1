#include "localserver.h"
#include <QLocalSocket>
#include <QTextStream>
LocalServer::LocalServer(QObject *parent) :QLocalServer(parent)
{
    mSocket = nullptr;

    connect(this, &LocalServer::newConnection,[&](){
        mSocket =nextPendingConnection();
    });
}

void LocalServer::enviar(const QString &mensaje)
{
    if(mSocket){
        QTextStream T(mSocket);
        T<< mensaje;
        mSocket->flush();
    }
}
