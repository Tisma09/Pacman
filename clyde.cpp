#include <random>
#include <ctime>

#include "clyde.h"

Clyde::Clyde(int x, int y, Background* parent): Ennemi(x, y, parent){
}

void Clyde::new_pos(){
    int val = rand() % 4;
    if (val==0){
        if((pos_y-1)< ymin){
            pos_y=14;
        }else{
            pos_y-=1;
        }
    }else if (val==1){
        if((pos_y+1)> ymax){
            pos_y=0;
        }else{
            pos_y+=1;
        }
    }else if (val==2){
        if((pos_x+1)> xmax){
            pos_x=0;
        }else{
            pos_x+=1;
        }
    }else{
        if((pos_x-1)< xmin){
            pos_x=31;
        }else{
            pos_x-=1;
        }
    }
    positionner(pos_x, pos_y);
    notify(pos_x, pos_y);
}
