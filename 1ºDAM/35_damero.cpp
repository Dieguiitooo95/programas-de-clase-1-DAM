#include <stdio.h>
#include <stdlib.h>

#define L 5

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet DAMERO");

    int lado;
    
    printf("LADO: ");
    scanf(" %i", &lado);

    for(int cua_fila=0; cua_fila<4; cua_fila++)
	for(int fila=0; fila<lado; fila++){
	    for(int cua_col=0; cua_col<L; cua_col++)
		for(int col=0; col<lado; col++)
		    
		    if((cua_fila * L + cua_col)%2 == 0)
			printf("#");
		    else
			printf(" ");
	    
	    printf("\n");

       	}

    printf("\n");

    return EXIT_SUCCESS;
}
