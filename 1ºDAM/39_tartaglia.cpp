#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet TARTAGLIA");

    int tablero[N][N];

/*Lineas del tablero*/
    for (int col=1; col<N; col++)
	tablero[0][col] = 0;

    for (int fila=0; fila<N; fila++)
	tablero[fila][0] = 1;

/*Bloque central*/
    for (int fila=1; fila<N; fila++)
	for (int col=1; col<N; col++)
	    tablero[fila][col] = tablero[fila-1][col] + tablero[fila-1][col-1];
    
    for (int fila=0; fila<N; fila++){
	for (int col=0; col<N; col++)
	    printf("%4i", tablero[fila][col]);
	printf("\n");
	printf("\n");
    }    

    return EXIT_SUCCESS;
}
