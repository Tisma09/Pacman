#ifndef PASTILLE_H
#define PASTILLE_H
#include "observercollision.h"
#include "notifiercollision.h"
#include "drawableelem.h"

class Pastille : public ObserverCollision, public DrawableElem
{
public:
    Pastille(int x, int y, Background* parent);
    bool testCollision(int x, int y);
    void collision(NotifierCollision *Collisionner);
};

#endif // PASTILLE_H
