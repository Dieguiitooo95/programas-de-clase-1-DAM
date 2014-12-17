#include <stdio.h>
#include <stdlib.h>

// Se pone %s porque es una cadena de caracteres o "string" y no un solo caracter %c.

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet NOMBRES");

    char nombre[10];
    int edad;

    printf("\n");
    printf("Hola, dime tu nombre: ");
    scanf("%s", nombre);
    printf("Te llamas %s.\n\n", nombre);
    printf("¿ Que edad tienes ? \n");
    scanf("%i", &edad);
	
	if (edad>=18)
	printf("Tu edad es %i. Eres mayor de edad, A BEBER !!\n\n", edad);
	else
	printf("Tu edad es %i. Eres menor de edad, QUE HACES FUERA DEL COLEGIO !!\n\n", edad);

    printf("Encantado, yo me llamo MAX D-24/11/14\n\n");
    
    return EXIT_SUCCESS;
}
