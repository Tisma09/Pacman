#include "personnage.h"
#include "exception.h"


Personnage::Personnage(int x, int y, std::string NewDeplacment, Background* parent) : Interactive(x,y, parent){
    CurrentDeplacment=NewDeplacment;
    //set_background_color(236, 10, 100);
    set_background_image("pacman_dr_4.png");
};

void Personnage::new_pos()
{
    if (Personnage::CurrentDeplacment =="UP"){
        if((pos_y-1)< ymin){
            pos_y=14;
        }else{
            pos_y-=1;
        }
    }else if (Personnage::CurrentDeplacment=="DOWN"){
        if((pos_y+1)> ymax){
            pos_y=0;
        }else{
            pos_y+=1;
        }
    }else if (Personnage::CurrentDeplacment=="RIGHT"){
        if((pos_x+1)> xmax){
            pos_x=0;
        }else{
            pos_x+=1;
        }
    }else if (Personnage::CurrentDeplacment=="LEFT"){
        if((pos_x-1)< xmin){
            pos_x=31;
        }else{
            pos_x-=1;
        }
    }else{
        throw ExceptionCommand();
    }
    positionner(pos_x, pos_y);
    NotifierCollision::notify(pos_x, pos_y);
}

void Personnage::arrow_pressed(std::string cmd){
    Personnage::CurrentDeplacment = cmd;
}
void Personnage::key_pressed(char key){
    //throw ExceptionCommand();
}
void Personnage::collision(NotifierCollision *Collisionner){
    std::cout << "Contact avec " << Collisionner <<std::endl;
    throw ExceptionBounds();
}
bool Personnage::testCollision(int x, int y){
    if(pos_x == x && pos_y == y){
        return true;
    }else{
        return false;
    }
}

void Personnage::update_pos(){
        new_pos();
}
