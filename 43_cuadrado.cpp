#include<stdlib.h>
#include<stdio.h>

int main( int argc, char *argv[]) {

int lado;
int inicial;

printf("LADO: ");
scanf(" %i", &lado);

for(int fila=0; fila<lado;fila++){
    for(int cuadrado=0; cuadrado<lado; cuadrado++){
	if (cuadrado == 0)
	    inicial = 0;
	else
	    inicial = 1;
	for(int columna=0; columna<lado; columna++)
	    if( (fila == columna && cuadrado % 2 == 0) || (fila + columna == lado -1 && cuadrado % 2 == 1) )
		printf("*");
	    else
		printf(" ");
    }
printf("\n");
}

return EXIT_SUCCESS;
}
