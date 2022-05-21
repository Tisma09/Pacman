#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "clyde.h"

void Clyde::new_pos(){
    srand(time(NULL));
    int val = rand() % 5;
}
