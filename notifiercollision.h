#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H

#include <iostream>
#include <string>
#include <vector>
#include "observercollision.h"

class NotifierCollision
{
private:
    std::vector<ObserverCollision*> ListObserver;
public:
    NotifierCollision();
    void addObserver(ObserverCollision& Obs);
    void removeObserver(ObserverCollision* Obs);
    void notify(int x, int y);
};

#endif // NOTIFIERCOLLISION_H
