#include <QCoreApplication>
#include "singleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton::getSingleton()->addNumber();
    Singleton::getSingleton()->addNumber();
    Singleton::getSingleton()->addNumber();

    return a.exec();
}
