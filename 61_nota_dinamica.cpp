#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet NOTA");

    double *p_nota;

    p_nota = (double *) malloc(sizeof(double))          //(doble *) para la funcion malloc ponemos entre parentesis el tipo de dato a convertir.
    scanf(" %lf", p_nota);
    printf("Tu nota es %.2lf\n", *p_nota);

    free(p_nota);

    return EXIT_SUCCESS;
}
