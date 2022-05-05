#ifndef PACMAN_H
#define PACMAN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Pacman; }
QT_END_NAMESPACE

class Pacman : public QMainWindow
{
    Q_OBJECT

public:
    Pacman(QWidget *parent = nullptr);
    ~Pacman();

private:
    Ui::Pacman *ui;
};
#endif // PACMAN_H
