#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet ORDEN");

    int A[] = {1,5,7,3,2,9}

    for(int i=1; A[i]; i++){
	for(int numero; numero<A[i]; numero++)
	    if(numero == i)
		printf("%i", A[i]);
    printf("\n");
    }

    return EXIT_SUCCESS;
}
