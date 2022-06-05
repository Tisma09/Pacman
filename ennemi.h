#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>
#include <string>
#include "observercollision.h"
#include "notifiercollision.h"
#include "regularmove.h"

class Ennemi : public RegularMove, public ObserverCollision, public NotifierCollision{
public:
    Ennemi(int x, int y, Background* parent);
    virtual void new_pos()=0;
    void update_pos();
    void deplacer(int x, int y);
    bool testCollision(int x, int y);
    void collision(NotifierCollision *Collisionner);
};

#endif
