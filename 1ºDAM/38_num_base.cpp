#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet NUMERO BASE");

    int numero;
    int base;

    printf("Dime el nº para convertir\n");
    scanf(" %i", &numero);

    printf("Dime la base para convertir\n");
    scanf(" %i", &base);


    return EXIT_SUCCESS;
}
