#include <QCoreApplication>
#include "gesturereader.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    GestureReader *gReader;

    gReader = new GestureReader(&a);

    return a.exec();
}
