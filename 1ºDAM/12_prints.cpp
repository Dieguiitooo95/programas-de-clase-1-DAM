#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char letra;

    printf("Elige una puta letra: ");

    //letra = getchar(); cualquiera de los dos vale, getchar ya sabe que es la entrada estandar.
    letra = getc(stdin);
    printf("Pues la %c es un cagarro de letra.\n", letra);

    if (letra > 'a')
	printf("Por favor escribe en MAYUSCULAS la letra.\n");


    return EXIT_SUCCESS;
}
