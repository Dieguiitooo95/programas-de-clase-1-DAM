#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet INVIERTE");

    char * dedo = argv[1];

    while (*dedo != '\0') dedo ++;

    while(dedo >= argv[1]){
	printf("%c", *dedo);
	dedo--;                                // Retrocede una celda a la izquierda.
    }

    printf("\n");

    return EXIT_SUCCESS;
}
