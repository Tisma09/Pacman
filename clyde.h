#ifndef CLYDE_H
#define CLYDE_H

#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "ennemi.h"


class Clyde: public Ennemi{
private:
    void new_pos();
};

#endif
