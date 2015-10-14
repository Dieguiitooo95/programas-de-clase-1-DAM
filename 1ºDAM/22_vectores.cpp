#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet VECTORES");

    int coordenada1_1;
    int coordenada2_1;
    int coordenada3_1;
    int coordenada1_2;
    int coordenada2_2;
    int coordenada3_2;
    int resultado_x;
    int resultado_y;
    int resultado_z;
    int resultado;

    // HAY QUE PONER LAS COORDENADAS CON ESPACIOS, ejemplo: 1 2 3

    printf("Dime las coordenadas del primer vector: "); 
    scanf(" %i %i %i", &coordenada1_1, &coordenada2_1, &coordenada3_1);
    printf("Dime las coordenadas del segundo vector: ");
    scanf(" %i %i %i", &coordenada1_2, &coordenada2_2, &coordenada3_2);

    resultado_x = coordenada1_1 * coordenada1_2;
    resultado_y = coordenada2_1 * coordenada2_2;
    resultado_z = coordenada3_1 * coordenada3_2;
    
    resultado = resultado_x + resultado_y + resultado_z;
    printf("El producto escalar de tus 2 vectores es: %i\n\n", resultado);


    return EXIT_SUCCESS;
}
