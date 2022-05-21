#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include <string>


class Personnage{
private:
    int pos_x, pos_y;
    std::string CurrentDeplacment;
public:
    Personnage(int x, int y, std::string CurrentDeplacment);
    void new_pos();
    void set(std::string cmd);
};

#endif
