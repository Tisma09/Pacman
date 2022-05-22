#include <random>
#include <ctime>

#include "clyde.h"

Clyde::Clyde(int x, int y): Ennemi(x, y){
}

void Clyde::new_pos(){
    srand(time(NULL));
    int val = rand() % 4;
    if (val==0){
        if((getY()-1)> ymin){
            throw ExceptionBounds();
        }else{
            deplacer(getY()-1, getX());
        }
    }else if (val==1){
        if((getY()+1)> ymax){
            throw ExceptionBounds();
        }else{
            deplacer(getY()+1, getX());
        }
    }else if (val==2){
        if((getX()+1)> xmax){
            throw ExceptionBounds();
        }else{
            deplacer(getY(), getX()+1);
        }
    }else{
        if((getX()-1)> xmin){
            throw ExceptionBounds();
        }else{
            deplacer(getY(), getX()-1);
        }
    }
    notify(getX(), getY());
}
