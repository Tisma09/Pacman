
#include "ennemi.h"

Ennemi::Ennemi(int x, int y, Background* parent):RegularMove(x,y,parent){
    set_background_color(1,6,7);
}

int Ennemi::getX(){
    return pos_x;
}
int Ennemi::getY(){
    return pos_y;
}

void Ennemi::deplacer(int x, int y){
    pos_x=x;
    pos_y=y;
}
void Ennemi::collision(){
    std::cout << "Y a collision" << std::endl;
}
bool Ennemi::testCollision(int x, int y){
    if(pos_x == x && pos_y == y){
        return true;
    }else{
        return false;
    }
}

void Ennemi::update_pos(){
    new_pos();
}
