#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet CUADRADO");

    int lado;
    
    printf("LADO: ");
    scanf(" %i", &lado);

    for(int fila=0; fila<lado; fila++){
	for(int cuadrado=0; cuadrado<N; cuadrado++)
	    for(int columna=0; columna<lado; columna++)
		printf(" %i", cuadrado);
	printf("\n");
    }
//    for(int fila=0; fila<lado; fila ++){
//	for(int columna=0; columna<lado; columna++)
//	    printf("0");
//	printf("\t");
//	for(int columna=0; columna<lado; columna++)
//	    printf("1");
//	printf("\n");
//	}
	    
    return EXIT_SUCCESS;
}
