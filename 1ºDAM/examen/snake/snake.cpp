#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct TCoordenada{
    int x;
    int y;
} Punto;

typedef Punto Velocidad;

void inicializar(Punto anillo[N]){
	anillo[0].x = 40;
	anillo[0].y = 17;

	for(int i=1; i<N; i++){
	    anillo[i].x = anillo[i-1].x + 1;   /*No se inicia en 0 porque sino al hacer el "-1" nos da error el programa, inicializamos en 1.*/
	    anillo[i].y = anillo[i-1].y;
	}
}

void mover(Velocidad v, Punto anillo[N]){
    for(int i=N-1; i<N; i--){
	    anillo[i].x = anillo[i-1].x;
	    anillo[i].y = anillo[i-1].y;
    }

	    anillo[i].x = anillo[i-1].x + v.x;
	    anillo[i].y = anillo[i-1].y + v.y;
}


    imprimir_coordenadas(serpiente);
    mover_con(v_cabeza, serpiente);
    imprimir_coordenadas(serpiente);
    
    int main(int argc, char *argv[]) {
    Punto serpiente[N];
    Velocidad v_cabeza = {0, 1};

   
    return EXIT_SUCCESS;
}
