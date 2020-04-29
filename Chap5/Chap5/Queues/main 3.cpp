#include <QCoreApplication>
#include "studentstest.h"

#include "ragnarstest.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    studentstest();

    ragnarsTest();

    return a.exec();
}
