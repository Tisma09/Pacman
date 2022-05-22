#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>
#include <string>
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi : public ObserverCollision, public NotifierCollision{
private:
    int pos_x, pos_y;
public:
    Ennemi(int x, int y);
    virtual void new_pos()=0;
    int getX();
    int getY();
    void deplacer(int x, int y);
    bool testCollision(int x, int y);
    void collision();
};

#endif
