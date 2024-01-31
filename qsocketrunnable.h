#ifndef QSOCKETRUNNABLE_H
#define QSOCKETRUNNABLE_H

#include <QRunnable>
#include <QTcpSocket>
#include <QDebug>
#include <QTime>

class QSocketRunnable : public QRunnable
{
public:
    QSocketRunnable(int handle);

    void run();

private:
    int descriptor;
};

#endif // QSOCKETRUNNABLE_H
