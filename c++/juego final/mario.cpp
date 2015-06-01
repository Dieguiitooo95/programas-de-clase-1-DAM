#include <stdlib.h>
#include "mario.h"

#define VLIM 1.15
#define ROZAMIENTO 0.0625

Mario::Mario ()
{
  static int i = 0;		// Pdte. variables de clase
  this->x = this->x + 331;
  this->y = this->y + 240;
  this->vx = 0;
  this->vy = 0;
  this->dibujo = NULL;
}

Mario::Mario (double x, double y = 0):x (x), y (y)
{
  this->vx = rand () % 3 - 1;
  this->vy = rand () % 3 - 1;
  this->dibujo = NULL;
}

/* Accedentes */
double
Mario::get_x ()
{
  return this->x;
}

double
Mario::get_y ()
{
  return this->y;
}

void
Mario::change_vx (float delta)
{
  this->vx += delta;
 }

void
Mario::change_vy (float delta)
{
  this->vy += delta;
 }

ALLEGRO_BITMAP *
Mario::get_dibujo ()
{
  return this->dibujo;
}

void
Mario::set_dibujo (ALLEGRO_BITMAP * sprite)
{
  this->dibujo = sprite;
}

/* Mutadora */

void
Mario::actualizate ()
{
  this->vx -= ROZAMIENTO * this->vx + rand () % 3 - 1;
  this->vy -= ROZAMIENTO * this->vy + rand () % 3 - 1;
  this->x += this->vx;
  this->y += this->vy;

  if (this->y < 0)
    this->y = 0;
  if (this->y > 480+70 - 133)
    this->y = 480+70 - 133; 
  if (this->x < 0)
    this->x = 0;
  if (this->x > 633+78 - 145)
    this->x = 700+78 - 145;
}

int
Mario::gameover ()
{
  if (this->y < 30)
    return 0;
  if (this->y > 480+70 - 153)
    return 0; 
  if (this->x < 30)
    return 0;
  if (this->x > 633+78 - 145)
    return 0;
 
  return 1;
}
