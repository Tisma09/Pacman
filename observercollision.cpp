#include "observercollision.h"
#include "exception.h"

ObserverCollision::ObserverCollision()
{
}
ObserverCollision::~ObserverCollision()
{
}
void ObserverCollision::collision(){
    std::cout << "Y a collision" << std::endl;
}
bool ObserverCollision::testCollision(int x, int y){
    throw ExceptionSizeTab();
}
