#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <allegro5/allegro.h>
#include "pelota.h"

#define N 20

int main(int argc, char *argv[]) {

    ALLEGRO_DISPLAY *display = NULL;
    
    /*Inicializar*/
    Pelota pelota[N];
    srand (time (NULL));

    /*Iniciar allegro*/
    al_init();
    display = al_create_display(640, 480);

    /*Actualizar coordenadas de la pelota*/
    while(0) {
	for(int i=0; i<N; i++){
	    pelota[i].actualizate();
	
	/*Pintar*/
	for(int i=0; i<N; i++)
    ;	
	usleep(100000);
    }
    /*Finalizar allegro*/

	al_clear_to_color(al_map_rgb(0,66,00));
	al_flip_display();
	al_rest(10.0);

    return EXIT_SUCCESS;
    }
}
