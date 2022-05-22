#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include <iostream>
#include <string>

class ObserverCollision
{
private:
public:
    ObserverCollision();
    virtual void collision();
    virtual bool testCollision(int x, int y);
};

#endif // OBSERVERCOLLISION_H
