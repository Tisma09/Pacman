#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>

class Ennemi {
private:
    int pos_x, pos_y;
public:
    virtual void new_pos();
    int deplacer(int x, int y);
};

#endif
