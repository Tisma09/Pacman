#include "personnage.h"
#include "exception.h"


Personnage::Personnage(int x, int y, std::string NewDeplacment, Background* parent) : Interactive(x,y, parent){
    CurrentDeplacment=NewDeplacment;
    set_background_color(1, 3, 3);
};

void Personnage::new_pos()
{
    if (Personnage::CurrentDeplacment =="UP"){
        if((pos_y-1)> ymin){
            throw ExceptionBounds();
        }else{
            pos_y-=1;
        }
    }else if (Personnage::CurrentDeplacment=="DOWN"){
        if((pos_y+1)> ymax){
            throw ExceptionBounds();
        }else{
            pos_y+=1;
        }
    }else if (Personnage::CurrentDeplacment=="RIGHT"){
        if((pos_x+1)> xmax){
            throw ExceptionBounds();
        }else{
            pos_x+=1;
        }
    }else if (Personnage::CurrentDeplacment=="LEFT"){
        if((pos_x-1)> xmin){
            throw ExceptionBounds();
        }else{
            pos_x-=1;
        }
    }else{
        throw ExceptionCommand();
    }
    NotifierCollision::notify(pos_x, pos_y);
}

void Personnage::arrow_pressed(std::string cmd){
    Personnage::CurrentDeplacment = cmd;
}
void Personnage::key_pressed(char key){
    throw ExceptionCommand();
}
void Personnage::collision(){
    std::cout << "Y a collision" << std::endl;
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
