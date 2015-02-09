#include <stdio.h>
#include <stdlib.h>

#define STEP 0.1
#define N 100

#define XC 30
#define YC 12

void plot(int x, int y){
    printf("\033[%i;%if*", YC - y, XC + x);
}

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet VALOR DERIVADAS");

    double f0[N]; // Función
    double f1[N]; // Derivada
    double f2[N]; // Integral

    /*Precalculamos los datos*/
    for(int i=0; i<N; i++){
	f0[i] = f (i * STEP);
	if (i == 0)
	    f1[i] = (f0[i] - f0[i-1]) / STEP;
	f2[0] = 0 
	else
	    f1[i] = (f0[0] - f(-STEP) ) / STEP;
    }

    for(int i=0; i<N; i++)
	printf();

return EXIT_SUCCESS;
}
