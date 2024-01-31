#include "qthreadpoolserver.h"
#include "qsocketrunnable.h"

QThreadPoolServer::QThreadPoolServer(QObject* parent):
    QTcpServer(parent)
{
    if(listen (QHostAddress::Any, 5500))
        qDebug() << "Listen...";
    else
        qDebug() << "Error" << errorString ();

    threadPool = new QThreadPool(this);
    threadPool->setMaxThreadCount (10);
}

void QThreadPoolServer::incomingConnection(qintptr handle)
{
    QSocketRunnable* runnable = new QSocketRunnable(handle);
    threadPool->start(runnable);
}
