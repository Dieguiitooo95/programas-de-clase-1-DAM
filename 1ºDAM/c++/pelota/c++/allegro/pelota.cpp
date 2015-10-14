#include <stdlib.h>
#include "pelota.h"

Pelota::Pelota (double x=0, double y=0) // Solo se puede definir un valor constante por si al hacer la llamada no introducen valor. ej: Pelota p(3) -> x=3 y=0
{
    this->x = x;
    this->y = y;
    this->vx = rand () % 3 - 1;
    this->vx = rand () % 3 - 1;
    this->dibujo = '*';
}

Pelota::Pelota ()
{
    static int i = 0; // Pdte. variables de clase
    this->x = 0 + 5 * i++;
    this->y = 10;
    this->vx = rand () % 3 - 1;
   this->vy = rand () % 3 - 1;
   this->dibujo = '*';
}

/* Accedentes */
double
Pelota::get_x ()
{
    return this->x;
}
double
Pelota::get_y ()
{
    return this->y;
}
char
Pelota::get_dibujo ()
{
    return this->dibujo;
}

/* Mutadora */
void
Pelota::actualizate ()
{
    this->x += this->vx;
    this->y += this->vy;
}
