#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet LISTA");
    
    unsigned int contador;
    //Unsigned sirve para coger del 0 a 64.000, en vez de, -32.000 a 32.000

    const char *lista[] = {"Txema", "Adri", "Diego", "Diego", "Adri", "Carlos", "Alejandro", "Alex", "Alvaro", "Byron", NULL};

    for(contador=0; lista[contador]; contador++)
	printf("%s\n", lista[contador]);

    printf("\n");

    return EXIT_SUCCESS;
}
