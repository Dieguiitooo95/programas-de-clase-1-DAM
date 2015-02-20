#include <stdlib.h>
#include <stdio.h>

#define FICHERO "interminable.txt"
#define MAX 0x100

int main() {
    
    FILE *pfichero;
    char buffer[MAX];

    if ((pfichero = fopen(FICHERO, "r+")) == NULL){
	fprintf(stderr, "No se ha podido abrir %s\n", FICHERO);
	return EXIT_FAILURE;
    }

    fgets(buffer, MAX, pfichero);

    fseek(pfichero, 0, SEEK_END);

    fprintf(pfichero, "%s", buffer);
    
    fclose(pfichero);

    return EXIT_SUCCESS;
}
