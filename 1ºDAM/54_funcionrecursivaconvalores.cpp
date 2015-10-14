#include <stdio.h>
#include <stdlib.h>

double f(double x){

    return x*x - 3;
}

int main(int argc, char *argv[]) {

    double x;

    system("clear");
    system("figlet FUNCION RECURSIVA");

    for(x=-20; x<20.1; x+=0.1)
    printf("f(%.1lf) = %.2lf\n", x, f(x) );

    return EXIT_SUCCESS;
}
