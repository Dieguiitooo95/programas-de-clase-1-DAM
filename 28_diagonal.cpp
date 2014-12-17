#include <stdio.h>
#include <stdlib.h>

#define C 10
#define L 10

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet X DE ASTERISCOS");
    
    for(int filas=0; filas<L; filas++){
	for (int columnas=0; columnas<C; columnas++)
	    if (filas==L-1 || columnas==0 || filas==0 || columnas==C-1 || columnas+1 == C-filas || filas==columnas)
		printf("*");
	    else
		printf(" ");

	printf("\n");

    }

    printf("\n");

    return EXIT_SUCCESS;
}
