#include "mainwindow.h"
#include <QApplication>
#include <iostream>

bool detecter_collision(int ennemis_x[], int ennemis_y[], int nb_ennemis, int x, int y );

void exeption_nb_ennemis(int nb_ennemis)
{
    if(nb_ennemis <= 0)
        throw ennemis_negatifs();
}

int main(int argc, char** argv)
{
    int x=5, y=4;
    int enn_x[4] = {1, 2, 3, 4}, enn_y[4]= {1, 2, 3, 4};

    try
    {
        exeption_nb_ennemis();
    }

    catch (ennemis_negatifs&)
       {
           std::cout << "Nombre d'ennemis incorrect" << std::endl;
       }

    if (detecter_collision(enn_x, enn_y, 4, x, y) == true)
    {
        std::cout << "Collision" << std::endl;
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

class ExceptionSizeTap
{
    private:
    public:

};
