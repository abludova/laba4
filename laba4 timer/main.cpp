#include <QCoreApplication>
#include <qdebug.h>
#include "timer.h"
int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    Timer time = Timer(15,20);
    Timer time2 = Timer("16:50");
    Timer end=time+(time-time2);
    qDebug("%d",time2-time);
    qDebug("%d:%d",end.getHours(),end.getMins());

    return a.exec();
}

