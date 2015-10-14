#include <stdio.h>
#include <stdlib.h>

#define N 8



void poner_presentacion(){
    system("clear");
    system("figlet Torre");
    }

void pintar_tablero(in tablero[N][N], int fila_torre, int columna_torre) {

    for (int fila=0; fila<N; fila++) {
	for(int columna=0; columna<N; columna++)
	    if (fila == fila_torre && columna == columna_torre)
		printf("♖");
	    else
	    printf("%s", negras[fila][columna] ? "X" : "░");
    printf("\n");
    }

int main(int argc, char *argv[]) {

    bool come = false;
    int fila_torre, columna_torre;
    int negras[N][N] = {
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}
    };

    poner_presentacion();
    system("toilet -f term --gay -F border Posición de la Torre");
    printf("x, y: ");
    scanf("%i, %i", &columna_torre, &fila_torre);
    printf("\n");

    for (int columna=0; columna<N && !come; columna++)
	if (negras[fila_torre][columna])
	    come = true;
    
    for (int fila=0; fila<N && !come; fila++)
	if (negras[fila][columna_torre])
	    come = true;
}
    printf("La torre %scome.\n\n",come ? "" : "no ");

    return EXIT_SUCCESS;
}
