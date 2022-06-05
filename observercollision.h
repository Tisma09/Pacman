#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
#include <iostream>
#include <string>
class NotifierCollision;

class ObserverCollision
{
public:
    ObserverCollision();
    ~ObserverCollision();
    virtual void collision(NotifierCollision *Collisionner)=0;
    virtual bool testCollision(int x, int y)=0;
};

#endif // OBSERVERCOLLISION_H
