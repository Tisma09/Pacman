#include "pacman.h"
#include "./ui_pacman.h"

Pacman::Pacman(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pacman)
{
    ui->setupUi(this);
}

Pacman::~Pacman()
{
    delete ui;
}

