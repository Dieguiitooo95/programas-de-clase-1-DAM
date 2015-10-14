#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet ESCALAR");

    double resultado = 0;;
    
    for(int primer_elemento_del_par=1;
	    primer_elemento_del_par<argc;
	    primer_elemento_del_par += 2)
	resultado +=
	    atof(argv[primer_elemento_del_par]) * 
	    atof(argv[primer_elemento_del_par + 1]);

    // atof sirve para pasar un numero a double o a float. Similar a atoi, transforma el nº a entero.

    printf("Escalar: %.2lf\n\n", resultado);

    return EXIT_SUCCESS;
}
