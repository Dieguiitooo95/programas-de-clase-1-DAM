#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "mi_allegro.h"
#include "pelota.h"

#define N 120
#define SPRITESHEET "sprites/eye.png"
#define DELTA 0.05
enum
{ KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT };

int
main (int argc, char **argv)
{


  Pelota pelota[N];

  srand (time (NULL));
  iniciar_allegro ();

  for (int i = 0; i < N; i++)
    pelota[i].set_dibujo (bm);

  while (1)
    {				/* Buzz Lightyear */
      ALLEGRO_EVENT ev;
      ALLEGRO_TIMEOUT timeout;
      al_init_timeout (&timeout, 0.06);

      bool get_event = al_wait_for_event_until (event_queue, &ev, &timeout);

      if (get_event)
	{
	  if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
	    break;
	  if (ev.type == ALLEGRO_EVENT_TIMER)
	    redraw = true;
	  if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
	    {
	      switch (ev.keyboard.keycode)
		{
		case ALLEGRO_KEY_UP:
		  tecla[KEY_UP] = true;
		  break;
		case ALLEGRO_KEY_DOWN:
		  tecla[KEY_DOWN] = true;
		  break;
		case ALLEGRO_KEY_LEFT:
		  tecla[KEY_LEFT] = true;
		  break;
		case ALLEGRO_KEY_RIGHT:
		  tecla[KEY_RIGHT] = true;
		  break;
		}
	    }
	  if (ev.type == ALLEGRO_EVENT_KEY_UP)
	    {
	      switch (ev.keyboard.keycode)
		{
		case ALLEGRO_KEY_UP:
		  tecla[KEY_UP] = false;
		  break;
		case ALLEGRO_KEY_DOWN:
		  tecla[KEY_DOWN] = false;
		  break;
		case ALLEGRO_KEY_LEFT:
		  tecla[KEY_LEFT] = false;
		  break;
		case ALLEGRO_KEY_RIGHT:
		  tecla[KEY_RIGHT] = false;
		  break;
		case ALLEGRO_KEY_LSHIFT:
		  sprite_number++;
		  break;
		}
	    }
	}

      /* Actualizar las coordenadas de la pelota */
      if (tecla[KEY_UP])
	pelota.change_vy (-DELTA);
      if (tecla[KEY_DOWN])
	pelota.change_vy (DELTA);
      if (tecla[KEY_LEFT])
	pelota.change_vx (-DELTA);
      if (tecla[KEY_RIGHT])
	pelota.change_vx (DELTA);

      for (int i = 0; i < N; i++)
	pelota[i].actualizate ();

      if (redraw && al_is_event_queue_empty (event_queue))
	{
	  al_clear_to_color (al_map_rgb (0, 0, 0));
	  al_draw_bitmap (bm2, 0, 0, 0);
	  for (int i = 0; i < N; i++)
	    al_draw_bitmap (pelota[i].get_dibujo (), pelota[i].get_x () + 450,
			    pelota[i].get_y () + 450, 0);

	  al_flip_display ();
	  redraw = false;
	}

    }

  destruir_allegro ();

  return 0;
}
