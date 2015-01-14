#include <stdio.h>
#include <stdlib.h>

// Para hallar el area multiplicamos por el "step" o diferencia, en este caso 0.1
// Con un step menor que 0.1, el error es despreciable.

double f(double x){
    return x*x + 3;
}
int main(int argc, char *argv[]) {

    double resultado;
    double area;

    double step = 0.1;
    for (double x=1; x<=20; x+=step)
	resultado += f(x);

    area = resultado * step;

    printf("Area total = %.2lf\n", area);

    return EXIT_SUCCESS;
}
