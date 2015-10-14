#include <stdio.h>
#include <stdlib.h>

#define C 9
#define L 9

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet ASTERISCOS");

	for(int columnas=0; columnas<C; columnas++){
	    for(int fila=0; fila<L; fila++)
	printf("%i", columnas);
	printf("\n");
}
    return EXIT_SUCCESS;
}
