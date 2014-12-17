#include <stdio.h>
#include <stdlib.h>

#define N 24
#define SUELDO 1000

int main( int argc, char *argv[]){
    int sueldo[N];
    for(int i=0; i<N; i++){
	 sueldo[i] = SUELDO;
	printf("Tu puto sueldo nº %i es = %i\n", i, sueldo[i]);
    }
    return EXIT_SUCCESS;
}
