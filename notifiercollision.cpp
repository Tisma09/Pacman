#include "notifiercollision.h"


NotifierCollision::NotifierCollision()
{
}

void NotifierCollision::addObserver(ObserverCollision& Obs){
    ListObserver.push_back(&Obs);
}
void NotifierCollision::removeObserver(ObserverCollision* Obs){
    int num=0;
    for(num; Obs!=ListObserver[num]; num++){}
    ListObserver.erase(ListObserver.begin()+num);
}
void NotifierCollision::notify(int x, int y){
    for(unsigned long long i=0 ; i<ListObserver.size() ; i++ ){
        if(ListObserver[i]->testCollision(x, y))
            ListObserver[i]->collision(this);
    }
}
