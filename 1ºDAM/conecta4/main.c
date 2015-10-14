#include <stdio.h>
#include "tablero.h"
#include "turno.h"
#include "comprobaciones.h"


int main() {

    int i, j, compr;
    char matriz[6][7];
    printf("                        CONECTA 4\n  - Creado por Diego Sanz Martínez con ayuda de Enrique Guilabert - \n\n");
    printf("Reglas:\nLos dos jugadores dispondrán de 21 fichas cada uno.\nEl objetivo será conseguir colocar cuatro fichas iguales en linea (horizontalmente, verticalmente o diagonalmente) antes que el otro, resultando victorioso aquel que complete el objetivo primero. La partida será empate si se completa el tablero sin victoria por parte de cualquiera de los jugadores.\n");
    printf("Jugador 1 juega con X\nJugador 2 juega con O\n\n");
    printf("¡Adelante!\n\n");
    inicializar(matriz);
    pintar(matriz);

    for (i = 1; i < 43; i++) {
        if (i % 2 != 0) {
            turnoJugador(matriz, 'X');
            borrarPantalla();
            pintar(matriz);

        } else {
            turnoJugador(matriz, 'O');
            borrarPantalla();
            pintar(matriz);
        }
        if (comprobarGanador(matriz) != 4){
            break;
        } 
    }

    return 0;
}


