#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet CONVIERTE");

        int resultado = 0;

    for(char *cadena = argv[1];
	    *cadena != '\0'; i++){
	resultado *= 10;
	resultado += cadena[i] - '0';
    }

    printf("%i\n", resultado);

    printf("\n");

    return EXIT_SUCCESS;
}
