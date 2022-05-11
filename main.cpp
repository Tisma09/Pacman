#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
#define xmin 0
#define xmax 32
#define ymin 0
#define ymax 15

bool deplacer_personnage(int* x, int* y, std::string cmd);

class ExceptionBounds{};
class ExceptionCommand{};


int main(int argc, char** argv)
{
int x=5, y=4;
int* x_addr = &x;
int* y_addr = &y;
while(true){
    std::string saisie;
    std::getline(std::cin, saisie);
    try{
        deplacer_personnage(x_addr, y_addr, saisie);
    }
    catch(ExceptionBounds){
        std::cout << "Hors limite";
    }
    catch(ExceptionCommand){
        std::cout << "Commande non reconnue";
    }
}
return 0;
}


bool deplacer_personnage(int& x, int& y, std::string cmd)
{

    if (cmd=="UP"){
        if((y-1)> ymin){
            throw ExceptionBounds();
        }else{
            y-=1;
            return true;
        }
    }else if (cmd=="DOWN"){
        if((y+1)> ymax){
            throw ExceptionBounds();
        }else{
            y+=1;
            return true;
        }
    }else if (cmd=="RIGHT"){
        if((x+1)> xmax){
            throw ExceptionBounds();
        }else{
            x+=1;
            return true;
        }
    }else if (cmd=="LEFT"){
        if((x-1)> xmin){
            throw ExceptionBounds();
        }else{
            x-=1;
            return true;
        }
    }else{
        throw ExceptionCommand();
    }

}

