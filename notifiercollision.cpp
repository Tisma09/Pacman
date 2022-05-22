#include "notifiercollision.h"


NotifierCollision::NotifierCollision()
{
}

void NotifierCollision::addObserver(ObserverCollision Obs){
    ListObserver.push_back(Obs);
}
void NotifierCollision::removeObserver(ObserverCollision Obs){
    ListObserver.erase(std::find(ListObserver.begin(), ListObserver.end(), Obs));
}
void NotifierCollision::notify(int x, int y){
    for(int i=0 ; i<ListObserver.size() ; i++ ){
        if(ListObserver[i].testCollision(x, y))
            ListObserver[i].collision();
    }
}
