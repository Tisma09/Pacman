#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include <iostream>
#include <string>

class ObserverCollision
{
public:
    ObserverCollision();
    ~ObserverCollision();
    virtual void collision();
    virtual bool testCollision(int x, int y)=0;
};

#endif // OBSERVERCOLLISION_H
