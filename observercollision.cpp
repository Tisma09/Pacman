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
