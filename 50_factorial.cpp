#include <stdio.h>
#include <stdlib.h>

int factorial(int n){

	if (n<=0)
	    return 1;

	return n * factorial(n-1);
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet FACTORIAL");

    int numero = atoi(argv[1]);
    printf("%i\n", factorial(numero));

    return EXIT_SUCCESS;
}
