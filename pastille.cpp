#include "pastille.h"

Pastille::Pastille(int x, int y, Background* parent):DrawableElem(x,y,parent){
    set_background_image("pastille.png");
    //set_background_color(10, 236, 100);
}

bool Pastille::testCollision(int x, int y){
    if(pos_x == x && pos_y == y){
        return true;
    }else{
        return false;
    }
}
void Pastille::collision(NotifierCollision *Collisionner){
    std::cout << "Y a collision avec pastille" << std::endl;
    hide();
    Collisionner -> removeObserver(this);
}
