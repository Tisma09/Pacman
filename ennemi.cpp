
#include "ennemi.h"
#include "exception.h"

Ennemi::Ennemi(int x, int y, Background* parent):RegularMove(x,y,parent){
    //set_background_color(10, 50, 245);
    set_background_image("pinky_ba_1.png");
}

void Ennemi::deplacer(int x, int y){
    pos_x=x;
    pos_y=y;
}
void Ennemi::collision(NotifierCollision *Collisionner){
    std::cout << "Contact avec " << Collisionner <<std::endl;
    throw ExceptionBounds();
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
