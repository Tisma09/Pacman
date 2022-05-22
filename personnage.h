#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include <string>
#include "notifiercollision.h"
#include "observercollision.h"

class Personnage : public NotifierCollision, public ObserverCollision{
private:
    int pos_x, pos_y;
    std::string CurrentDeplacment;
public:
    Personnage(int x, int y, std::string CurrentDeplacment);
    void new_pos();
    void set(std::string cmd);
    bool testCollision(int x, int y);
    void collision();
};

#endif
