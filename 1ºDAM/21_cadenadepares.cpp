#include <stdio.h>
#include <stdlib.h>

#define N 10

int main( int argc, char *argv[]) {
    int par[N];

    for(int i=0; i<N; i++)
	par[i] = 2 * i;
    printf("\n╔");
    for(int i=0; i<N; i++)
	printf("═══╦");
    printf("\b╗");

    printf("\n║");
    for(int i=0; i<N; i++)
	printf(" %i ║", par [i]);

    printf("\n╚");
    for(int i=0; i<N; i++)
	printf("═══╩");
    printf("\b╝");

    printf("\n\n");


    return EXIT_SUCCESS;
}
