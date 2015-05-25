#ifndef __MI_ALLEGRO_H__
#define __MI_ALLEGRO_H__
#include <stdlib.h>
#include <allegro5/allegro.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#define SPRITESHEET "images/loco.png"
#define BACKGROUND "images/fondo.jpg"
const float FPS = 60;
extern ALLEGRO_EVENT_QUEUE *event_queue;
extern ALLEGRO_DISPLAY *display;
extern ALLEGRO_TIMER *timer;
extern ALLEGRO_BITMAP *bm;
extern ALLEGRO_BITMAP *bm2;
extern bool redraw;
#ifdef __cplusplus
extern "C"
{
#endif
    void iniciar_allegro ();
    void destruir_allegro ();
#ifdef __cplusplus
}
#endif
#endif
