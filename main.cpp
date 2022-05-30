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





bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y );
bool deplacer_personnage(int* x, int* y, std::string cmd);

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
        MainWindow w;
        w.show();
        return a.exec();
/*
    Personnage pacman(0, 0, "UP");
    Clyde Clydi1(5, 5);
    Clyde Clydi2(10, 10);
    Clydi1.addObserver(pacman);
    Clydi2.addObserver(pacman);
    pacman.addObserver(Clydi1);
    pacman.addObserver(Clydi2);

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
*/



    int x=5, y=4;
    int nb_éléments=4;
    int enn_x[4] = {1, 2, 3, 4}, enn_y[4]= {1, 2, 3, 4};
    try
    {
        if (detecter_collision(enn_x, enn_y, nb_éléments, x, y) == true)
        {
            std::cout << "Collision" << std::endl;
        }
    }
    catch(ExceptionSizeTab){
           std::cout << "Nombre d'ennemis incorrect" << std::endl;
    }
    return 0;
}


bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y)
{
    bool collision = false;
    if(nb_ennemis <= 0)
        throw ExceptionSizeTab();
    for(int i=0;i<nb_ennemis;i++)
    {
        if(ennemis_x[i] == x && ennemis_y[i] == y)
            collision = true;
    }
    if(collision == true){
        return true;
    }else{
        return false;
    }
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

