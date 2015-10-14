#include <stdio.h>
#include <stdlib.h>

// AL EJECUTAR EL PROGRAMA PONEMOS: ./15_lecturas "nombre_del_fichero"

// LOS COMENTARIOS SON OTRA FORMA DE HACER EL PROGRAMA

int main(int argc, char *argv[]) {
    FILE *pf;
    char letra;
    // bool dentro_de_comentarios

    if(argc < 2){
	printf("Usa: %s <nombre_del_fichero>\n", argv[0]);
	return EXIT_FAILURE;
    }

    pf = fopen(argv[1], "r");

    if(pf == NULL){
	perror("fopen");
	//fprintf(stderr, "No se ha podido abrir el fichero.\n");      ESTE NO TE INDICA EL TIPO DE ERROR
	return EXIT_FAILURE;
    }

    while( (letra = fgetc(pf)) != EOF ) {
	if(letra == '#')
	    while((letra = fgetc(pf)) != '\n');
	putchar(letra);
    }
	// while( (letra = fgetc(pf)) != EOF ) {
	// if (letra == '#')
	//     dentro_de_comentarios = true;
	// if (letra == '\n')
	//     dentro_de_comentarios = false;
	//
	// if (!dentro_de_comentarios)
	//     putchar(letra);
    
    fclose(pf);

    return EXIT_SUCCESS;
}
