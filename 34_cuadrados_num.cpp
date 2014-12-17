#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet CUADRADO");

    int lado;
    
    printf("LADO: ");
    scanf(" %i", &lado);

    for(int cuadrado_col=0; cuadrado_col<2; cuadrado_col++)
	for(int fila=0; fila<lado; fila++){
	    for(int cuadrado=0; cuadrado<N; cuadrado++)
		for(int columna=0; columna<lado; columna++)
		    printf(" %i", lado);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
