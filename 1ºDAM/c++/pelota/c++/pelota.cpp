#include <stdlib.h>
#include "pelota.h"

Pelota::Pelota(){
    static int i = 0;
    this->x = 0 + 5 * i++;
    this->y = 10;
    this->vx = rand() % 3 - 1;
    this->vy = rand() % 3 - 1;
    this->dibujo = '*';
}

/*Funciones accedentes*/
double Pelota::get_x() { return this->x; }
double Pelota::get_y() { return this->y; }
double Pelota::get_dibujo() { return this->dibujo; }

/*Funcion mutadora*/
void Pelota::actualizate() {
    this->x += this->vx;
    this->y += this->vy;
}
