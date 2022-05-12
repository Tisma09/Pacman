#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
#define xmin 0
#define xmax 32
#define ymin 0
#define ymax 15
#include <random>
#include <ctime>



bool deplacer_personnage(int* x, int* y, std::string cmd);

class ExceptionBounds{};
class ExceptionCommand{};
class ennemis_negatifs{};
class ExceptionSizeTab{};

class Ennemi {
private:
    int pos_x, pos_y;
public:
    virtual void new_pos();
    int deplacer(int x, int y);
};
class Clyde: public Ennemi{
    void new_pos(){
    srand(time(NULL));
    int val = rand() % 5;
}
};


bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y );

void exeption_nb_ennemis(int nb_ennemis)
{
    if(nb_ennemis <= 0)
        throw ennemis_negatifs();
}


int main(int argc, char** argv)
{
    int x=5, y=4;
    int nb_éléments;
    int enn_x[4] = {1, 2, 3, 4}, enn_y[4]= {1, 2, 3, 4};

    try
    {
        exeption_nb_ennemis(4);
    }
    catch (ennemis_negatifs&)
       {
           std::cout << "Nombre d'ennemis incorrect" << std::endl;
       }

    if (detecter_collision(enn_x, enn_y, 4, x, y) == true)
    {
        std::cout << "Collision" << std::endl;
    }

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
    try {
        if(nb_éléments<=0)
            throw(ExceptionSizeTab);
    }
    catch(ExceptionSizeTab){
        std::cout << "Nombre d'élements incorrect" << std::endl;
    }
    try {
        detecter_collision(enn_x, enn_y, 4, x, y);
    }
    catch () {
    }
    try {
        detecter_collision(enn_x, enn_y, -1, x, y);
    }
    catch () {
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
bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y, std::string cmd)
{
    for(int i=0;i<nb_ennemis;i++)
    {
        if(ennemis_x[i] == x && ennemis_y[i] == y)
            return true;
        else
            return false;
    }
}


