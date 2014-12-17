#include <stdio.h>
#include <stdlib.h>

#define divisores 100

int main(int argc, char *argv[]) {

    int divisores[N];
    int numero = atoi(argv[1]);
    int nd = 0;
    int suma = 0;

    system("clear");
    system("figlet ");

    for (int pd=numero-1; pd>0; pd--)
	if (numero % pd == 0)
	    divisores[nd++] = pd;

    return EXIT_SUCCESS;
}
