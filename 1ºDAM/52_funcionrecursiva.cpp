#include <stdio.h>
#include <stdlib.h>

double funcion(double x){

    return x*x - 3;
}

int main(int argc, char *argv[]) {

    double num;

    system("clear");
    system("figlet FUNCION RECURSIVA");

    printf("X: ");
    scanf(" %lf", &num);

    printf("%lf\n", funcion(num) );

    return EXIT_SUCCESS;
}
