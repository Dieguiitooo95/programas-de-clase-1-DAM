#include <stdio.h>
#include <stdlib.h>

#define C 10
#define L 10

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet CUADRADO DE NUMEROS");
    
    int filas;
    int columnas;
    int posicion = 1;

    for(filas=0; filas<L; filas++){
	for(columnas=0; columnas<C; columnas++, posicion++)
	    printf("%3i", posicion);
	printf("\n");
    }
    
    printf("\n");

    return EXIT_SUCCESS;
}
