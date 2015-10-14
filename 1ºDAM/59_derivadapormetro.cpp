#include <stdio.h>
#include <stdlib.h>

#define STEP 0.1
#define N 100

// Igual al programa 57 declaramos la función, hacemos un arraid(f0[N]) y derivamos la función en un punto - la funcion en el punto anterior y luego dividir.

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet VALOR DERIVADAS");

    double f0[N]; // Función
    double f1[N]; // Derivada

    /*Precalculamos los datos*/
    for(int i=0; i<N; i++){
	f0[i] = f (i * STEP);
	if (i>0)
	    f1[i] = (f0[i] - f0[i-1]) / STEP;
	else
	    f1[i] = (f0[0] - f(-STEP) ) / STEP;
    }

    for(int i=0; i<N; i++)
	printf("%.2lf\n", f1[i]);

return EXIT_SUCCESS;
}

// Calcular el area de una funcion entre 0 y 10...
/*
for(int i=0; i<10; i+STEP);
area += f0[i] * STEP;

printf("%.2lf\n", area);
*/
