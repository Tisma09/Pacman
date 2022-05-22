#ifndef CLYDE_H
#define CLYDE_H

#include "ennemi.h"
#include "exception.h"


class Clyde: public Ennemi{
public:
    Clyde(int x, int y);
    void new_pos();
};

#endif
