#ifndef QTHREADPOOLSERVER_H
#define QTHREADPOOLSERVER_H

#include <QTcpServer>
#include <QThreadPool>

class QThreadPoolServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit QThreadPoolServer(QObject* parent = 0);
    void incomingConnection (qintptr handle);

signals:

public slots:

private:
    QThreadPool* threadPool;
};

#endif // QTHREADPOOLSERVER_H
