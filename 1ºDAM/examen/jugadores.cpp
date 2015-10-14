#include <stdlib.h>
#include <stdio.h>

#define A 10
#define B 0x100
#define FICHERO "numeros.bin"
#define NOMBRE jugador[i].nombre
#define FUERZA jugador[i].habilidad.fuerza
#define RESISTENCIA jugador[i].habilidad.resistencia
#define VELOCIDAD jugador[i].habilidad.velocidad
#define DINERO jugador[i].dinero
#define PUNTOS jugador[i].puntos

struct Habilidades {
    int fuerza;
    int resistencia;
    int velocidad;
};

struct TInfo{
    char nombre[B];
    Habilidades habilidad;
    int puntos;
    int dinero;
};

void rellena (struct TInfo jugador[A]){
    for(int i=0; i<A; i++){
	system("clear");
	system("figlet JUGADORES");
	printf("Introduce el nombre del jugador %i:\n", i+1);
	scanf("%s", NOMBRE);
	printf("Introduce la fuerza(0-10): ");
	scanf("%i", &FUERZA);
	printf("Introduce la resistencia(0-10): ");
	scanf("%i", &RESISTENCIA);
	printf("Introduce la velocidad(0-10): ");
	scanf("%i", &VELOCIDAD);
	printf("Introduce puntos: ");
	scanf("%i", &PUNTOS);
	printf("Introduce dinero recaudado: ");
	scanf("%i", &DINERO);
    }
}

void guarda (struct TInfo jugador[A],FILE *puntero){
    for(int i=0; i<A; i++){
	fwrite(NOMBRE, sizeof(char), B, puntero);
	fwrite(&FUERZA, sizeof(int), 2, puntero);
	fwrite(&RESISTENCIA, sizeof(int), 2, puntero);
	fwrite(&VELOCIDAD, sizeof(int), 2, puntero);
	fwrite(&PUNTOS, sizeof(int), 2, puntero);
	fwrite(&DINERO, sizeof(int), 2, puntero);
    }
}

int main () {
    FILE *numeros;
    struct TInfo jugador[A];
    if((numeros = fopen(FICHERO, "rb")) == NULL){
	numeros = fopen(FICHERO, "wb");
	rellena(jugador);
	guarda(jugador, numeros);
    }else {
	fread(jugador, sizeof(struct TInfo), A, numeros);
    }
    fclose(numeros);
    return EXIT_SUCCESS;
}
