#include "notifiercollision.h"


NotifierCollision::NotifierCollision()
{
    std::vector<ObserverCollision> ListObserver{};
}

void NotifierCollision::addObserver(ObserverCollision Obs){
    ListObserver.push_back(Obs);
}
void NotifierCollision::removeObserver(int num){
    ListObserver.erase(ListObserver.begin()+num);
}
void NotifierCollision::notify(int x, int y){
    for(unsigned long long i=0 ; i<ListObserver.size() ; i++ ){
        if(ListObserver[i].testCollision(x, y))
            ListObserver[i].collision();
    }
}
