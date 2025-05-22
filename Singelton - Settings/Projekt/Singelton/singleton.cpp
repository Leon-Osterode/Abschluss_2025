#include "singleton.h"

Singleton* Singleton::singleton = nullptr;

Singleton::Singleton(void) : number(new int(0)) {}

Singleton::~Singleton(void)
{
    delete number;
}

Singleton::MemGuard::~MemGuard( void )
{
    delete singleton;
    singleton = nullptr;
}

Singleton* Singleton::getSingleton(void)
{
    static MemGuard memGuard;
    if(!singleton) singleton = new Singleton;
    return singleton;
    //return singleton ? singleton = new Singleton : singleton;
}

void Singleton::addNumber()
{
    qWarning() << "Number:" << ++(*number);
}

