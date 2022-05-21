#include "mainwindow.h"
#include <QApplication>

#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "exception.h"
#include "personnage.h"
#include "ennemi.h"
#include "clyde.h"






bool deplacer_personnage(int* x, int* y, std::string cmd);





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

    Personnage pacman(0, 0, "UP");
    while(true){
        std::string saisie;
        std::getline(std::cin, saisie);
        pacman.set(saisie);
        try{
            pacman.new_pos();
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


