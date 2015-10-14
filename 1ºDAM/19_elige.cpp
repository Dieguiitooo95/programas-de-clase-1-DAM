#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int opcion;

    const char *opciones[] = {
	"Circulo",
	"Cuadrado",
	"Triangulo"
    };

    do {

    system("clear");
    system("figlet Menu");

    printf("\n\n\tElige o Muere: \n");

    for (int i=0; i<sizeof(opciones) / sizeof(char *); i++)
	printf("%i.- %s. \n", i+1, opciones[i]);

    printf("\nOpcion: ");

    scanf(" %i", &opcion);
    }while(opcion<1 || opcion>3);

    switch(opcion){
	case 1:
	    printf("Has elegido un circulo.\n");
	    break;
	case 2:
	    printf("Has elegido un cuadrado.\n");
	    break;
	case 3:
	    printf("Has elegido un triangulo.\n");
	    break;
	default:
	    printf("Has elegido ser un gilipollas en esta vida.\n");
	    break;
    }

    return EXIT_SUCCESS;
}
