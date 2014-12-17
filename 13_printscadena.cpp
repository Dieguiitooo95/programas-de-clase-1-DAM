#include <stdio.h>
#include <stdlib.h>

// SOLO VALEN NOMBRES DE 5 LETRAS

int main(int argc, char *argv[]) {

    system("toilet -f term --gay -F border NOMBRES");

    printf("Dime tu nombre: ");
    char nombre[6];

    //gets(nombre); NO VALE PORQUE PUEDEN EJECUTAR EL SUDO SU
    fgets(nombre, sizeof(nombre) , stdin);
    printf("Hola, %s , encantado de conocerte.\n", nombre);


    return EXIT_SUCCESS;
}
