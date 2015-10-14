#include <stdio.h>
#include <stdlib.h>

#define FLAVOURS 3

typedef enum { naranja, vainilla, limon, end} Helado;

const char *options[] = {
    "Naranja",
    "Vainilla",
    "Limon",
    "Exit",
    NULL
};

Helado menu() {
    int option;
    do {
    system("clear");
    system("toilet -f pagga --gay Helados");
    
    puts("");
    puts("\tOpciones: ");
    for(int i=0; options[i] != NULL; i++)
	printf("\t\t%i.- %s\n", i+1, options[i]);
    printf("\n\tSu eleccion es: ");
    scanf(" %i", &option);
    option--;

    } while(option < 0 || option > end);

    return (Helado) option;
}

int discount(int helados[FLAVOURS], Helado type) {
    helados[type] -= 100;

    return 0;
}

void inventory(int helados[FLAVOURS]) {
    printf("\n\n\n");

    printf("+");
    for(int i=0; i<FLAVOURS; i++)
	printf("------+");
    printf("\n");

    printf("|");
    for(int i=0; i<FLAVOURS; i++)
	printf(" %4i |", helados[i]);
    printf("\n");

    printf("+");
    for(int i=0; i<FLAVOURS; i++)
	printf("------+");
    printf("\n");

    puts("\nPulse una tecla para continuar.");
    scanf(" %*s");
}

int main(int argc, char *argv[]) {

    int helados[FLAVOURS] = { 1300, 2076, 9001 };
    Helado option;

    while( ( option = menu() ) != end ) {
	discount(helados, option);
	inventory(helados);
    }

    return EXIT_SUCCESS;
}
