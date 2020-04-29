#include <QCoreApplication>
#include "ragnarstest.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ragnarsTest();

    return a.exec();

}
