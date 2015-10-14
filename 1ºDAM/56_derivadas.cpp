#include <stdio.h>
#include <stdlib.h>

#define STEP 0.1

//Imprime X -> f(X) -> derivada f(X) o f´(x)

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet DERIVADAS");

    printf("X\tf(x)\tDerivada\n");
    for(double x=0; x<10; x+=STEP)
	printf("%.1lf\t%.3lf\t%.3lf\n", x, f(x), (f(x+STEP) -f(x) ) / STEP);

    return EXIT_SUCCESS;
}
