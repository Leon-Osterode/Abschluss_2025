#ifndef SINGLETON_H
#define SINGLETON_H

#include <QtCore>

class Singleton
{
private:
    Singleton(void);
    static Singleton* singleton;
    Singleton(const Singleton& s) = delete;
    class MemGuard { public: ~MemGuard(void); };
    Singleton& operator= (const Singleton& s) = delete;

    int* number;

protected:
    ~Singleton( void );

public:
    static Singleton* getSingleton(void);
    void addNumber();
};

#endif // SINGLETON_H
