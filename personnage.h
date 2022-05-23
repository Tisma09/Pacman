#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include <string>
#include "notifiercollision.h"
#include "observercollision.h"
#include "interactive.h"

class Personnage : public Interactive, public NotifierCollision, public ObserverCollision{
private:
    std::string CurrentDeplacment;
public:
    Personnage(int x, int y, std::string CurrentDeplacment, Background *parent);
    void new_pos();
    void arrow_pressed(std::string cmd);
    void key_pressed(char key);
    bool testCollision(int x, int y);
    void collision();
    void update_pos();
};

#endif
