#include <QCoreApplication>
#include "qthreadpoolserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThreadPoolServer server;

    return a.exec();
}
