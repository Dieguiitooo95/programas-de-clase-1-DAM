#include <stdio.h>
#include <stdlib.h>

#define STEP 0.1
#define N 100

//Imprime X -> f(X)

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet DERIVADAS");

    double f0[N];
    int i=0;

    printf("Posicion\tValor de la función\n");

    for(double x=0; x<=10; x+=STEP, i++){
	 f0[i] = f(x);
    printf("%i\t\t\t%.3lf\n", i, f(x));
    }

return EXIT_SUCCESS;
}
