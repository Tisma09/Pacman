#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "personnage.h"
#include "ennemi.h"
#include "clyde.h"
#include "pastille.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Pastille* pst= new Pastille(5, 10, ui->centralwidget);
    Personnage* pacman = new Personnage(0, 0, "RIGHT", ui->centralwidget);
    Clyde* Clydi1 = new Clyde(5, 5, ui->centralwidget);
    Clyde* Clydi2 = new Clyde(10, 10, ui->centralwidget);
    Clydi1->addObserver(*pacman);
    Clydi2->addObserver(*pacman);
    pacman->addObserver(*Clydi1);
    pacman->addObserver(*Clydi2);
    pacman->addObserver(*pst);
}

MainWindow::~MainWindow()
{
    delete ui;
}

