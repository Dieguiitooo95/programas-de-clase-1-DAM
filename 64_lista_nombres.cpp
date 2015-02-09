#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 0x100

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet LISTA NOMBRES");

    int i=0;
    char **lista = NULL;
    bool seguir = true;
    char buffer[MAX];
    int contador=0;

    do {
	printf("Escribe nombre: ");
	scanf(" %s", buffer);
	if (buffer[0] == '1' )
	    seguir = false;
	else{
	    i++;
	    lista = (char **) realloc(lista, i * sizeof(char *));
	    lista[i-1] = (char *) malloc(strlen(buffer) + 1);
	    strncpy(lista[i-1], buffer, strlen(buffer) + 1);
	}
    } while(seguir);

    for(contador=0; contador<i; contador++)
	printf("Nombre: %s\n", lista[contador]);

    // Hacemos el free(lista[i]) antes que free(lista) para que la memoria no se quede bloqueada.
    
    free(lista[i]);
    free(lista);

    return EXIT_SUCCESS;
}
