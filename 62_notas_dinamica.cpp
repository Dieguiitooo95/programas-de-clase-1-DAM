#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet NOTA");

    double *p_nota;
    int n;

    printf("¿Cuántas notas tienes? ");
    scanf(" %i", &n);

    p_nota = (double *) malloc(n * sizeof(double));          //(doble *) para la funcion malloc ponemos entre parentesis el tipo de dato a convertir.
    
    for(int i=0; i<n; i++){
	printf("Dime tu nota %i: ", i+1);
	scanf(" %lf", p_nota + i);
    }

    for(int i=0; i<n; i++)
	printf("La nota %i es %.2lf\n", n, *(p_nota+i));
    
    free(p_nota);

    return EXIT_SUCCESS;
}
