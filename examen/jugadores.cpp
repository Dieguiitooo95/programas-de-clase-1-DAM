#include <stdlib.h>
#include <stdio.h>

int main() {

    struct TInfo {
	char Nombre[0X20];


	/*Arraid de 10 jugadores(cada celda es de tipo jugador)
	 *
	 * 2 structs:
	 * {Nombre
	 * habilidad(struct)
	 *    fuerza
	 *    resistencia
	 *    velocidad
	 * puntos
	 * dinero
	 * }(struct)
	 */

	FILE *pdatos;

	pdatos = fopen("datos.txt", "rb");
    }
