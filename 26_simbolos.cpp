#include <stdio.h>
#include <stdlib.h>

#define C 9
#define L 9

//FORMA DE TXEMA

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet ASTERISCOS");

//for(int filas=0; filas<L; filas++){
//for (int columnas=0; columnas<C; columnas++)
//if (filas==0 || columnas == L-1)
//printf("*");
//else
//printf(" ");
//printf("\n");
//}

    for(int columnas=0; columnas<C; columnas++)
	printf("*");
    for(int filas=0; filas<L; filas++)
	printf("\n");
    for(int columnas=0; columnas<C; columnas++)
	printf("*");
    printf("\n");

    return EXIT_SUCCESS;
}
