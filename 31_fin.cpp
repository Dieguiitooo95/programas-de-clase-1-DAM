#include <stdio.h>
#include <stdlib.h>

#define N 8

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet FIN");

    int lista[N];

    lista[1] = lista[0] = 1;

    for(int i=2; i<N; i++)
	lista[i] = lista[i-1] + lista[i-2];

//    for(int i=0; i<N; i++)
//	printf("%4i", lista[i]);

    for(int i=0; i<N; i++){
      for(int a=0; a<lista[i]; a++)
	  printf("*");
      printf("\n");
    }

    return EXIT_SUCCESS;
}
