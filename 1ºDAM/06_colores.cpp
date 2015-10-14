#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {
    int rojo, azul, amarillo;
    
    printf("Mira un color.\n");
    printf("Tu color tiene rojo (1=Si/0=No) ?");
   
    scanf(" %i", &rojo);

    printf("Tu color tiene azul (1=Si/0=No) ?");

    scanf(" %i", &azul);
    
    printf("Tu color tiene amarillo (1=Si/0=No) ?");
   
    scanf(" %i", &amarillo);
    
    if (azul == 1 && rojo == 0 && amarillo == 0)
	printf("Claro que es AZUL coño !\n");

    if (rojo == 1 && azul == 0 && amarillo == 0)
	printf("Claro que es ROJO coño !\n");
    
    if (amarillo == 1 && rojo == 0 && azul == 0)
	printf("Claro que es AMARILLO coño !\n");

    if (rojo == 1 && azul == 1 && amarillo == 0)
	printf("Te has puesto MORAO.\n");
    if (rojo == 1 && amarillo == 1 && azul == 0)
	printf("Eres mi media NARANJA.\n");
    if (azul == 1 && amarillo == 1 && rojo == 0)
	printf("Verde que te quiero VERDE.\n");
    if (rojo == 1 && azul == 1 && amarillo == 1)
	printf("BLANCO, al contrario que tu alma !!\n");
    if (rojo == 0 && azul == 0 && amarillo == 0)
	printf("El gato NEGRO.\n");

    return EXIT_SUCCESS;
}
