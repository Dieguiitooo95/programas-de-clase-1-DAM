#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "pelota.h"

#define N 20
const float FPS = 60;

int
main (int argc, char **argv)
{
  ALLEGRO_DISPLAY *display = NULL;
  ALLEGRO_EVENT_QUEUE *event_queue = NULL;
  ALLEGRO_TIMER *timer = NULL;
  ALLEGRO_BITMAP *bm = NULL;
  ALLEGRO_BITMAP *bm2 = NULL;
  ALLEGRO_BITMAP *bm3 = NULL;

  bool redraw = true;

  Pelota pelota[N];

  srand (time (NULL));

  if (!al_init ())
    {
      fprintf (stderr, "Me he quedado sin allegro");
      return -1;
    }

  if (!al_init_image_addon ())
    {
      fprintf (stderr, "No se ha podido cargar el addon de imagnes.");
      return -1;
    }

  timer = al_create_timer (1.0 / FPS);

  if (!timer)
    {
      fprintf (stderr, "No se ha podido crear un temporizador.");
      return -1;
    }

  display = al_create_display (1024, 768);

  if (!display)
    {
      al_destroy_timer (timer);
      fprintf (stderr, "Me he quedado sin display.");
      return -1;
    }

  bm = al_load_bitmap ("images/ironman.jpg");
  bm2 = al_load_bitmap ("images/warmachine.jpg");
  bm3 = al_load_bitmap ("images/gente.jpg");

  if (!bm)
    {
      fprintf (stderr, "No se ha podido crear el bitmap");
      al_destroy_timer (timer);
      al_destroy_display (display);
      return -1;
    }

  if (!bm2)
    {
      fprintf (stderr, "No se ha podido crear el bitmap 2");
      al_destroy_timer (timer);
      al_destroy_display (display);
      al_destroy_bitmap (bm);
      return -1;
    }
  
  if (!bm3)
    {
      fprintf (stderr, "No se ha podido crear el bitmap 3");
      al_destroy_timer (timer);
      al_destroy_display (display);
      al_destroy_bitmap (bm);
      al_destroy_bitmap (bm2);
      return -1;
    }

  event_queue = al_create_event_queue ();

  if (!event_queue)
    {
      al_destroy_timer (timer);
      al_destroy_bitmap (bm);
      al_destroy_bitmap (bm2);
      al_destroy_bitmap (bm3);
      al_destroy_display (display);
      fprintf (stderr, "No se ha creado la cola de eventos.");
      return -1;
    }

  al_register_event_source (event_queue, al_get_timer_event_source (timer));
  al_register_event_source (event_queue,
			    al_get_display_event_source (display));

  al_clear_to_color (al_map_rgb (0, 0, 0));
  al_flip_display ();
  al_start_timer (timer);

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
	}

      /* Actualizar las coordenadas de la pelota */
      for (int i = 0; i < N; i++)
	pelota[i].actualizate ();

      /* Pintar */
      for (int i = 0; i < N; i++)
	;
      if (redraw && al_is_event_queue_empty (event_queue))
	{
	  al_clear_to_color (al_map_rgb (0, 0, 0));
	  al_draw_bitmap (bm, 50, 10, 0);
	  al_draw_bitmap (bm2, 550, 10, 0);
	  al_draw_bitmap (bm3, 60, 450, 0);
	  al_flip_display ();
	  redraw = false;
	}
    }

  al_destroy_timer (timer);
  al_destroy_display (display);
  al_destroy_event_queue (event_queue);

  return 0;
}
