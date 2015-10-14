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

    double f0[N];
    int i=0;

    printf("Posicion\tValor de la función\n");

    for(double x=0; x<=10; x+=STEP, i++){
	 f0[i] = ( (f(x+STEP)-f(x)) / STEP );
    printf("%i\t\t\t%.3lf\n", i, ( (f(x+STEP)-f(x)) / STEP ) );
    }

return EXIT_SUCCESS;
}
