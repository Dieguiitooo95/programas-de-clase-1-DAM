#include "tablero.h"


void inicializar(char tablero[][7]) {
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            tablero[i][j] = ' ';
        }
    }
}

void pintar(char tablero[][7]) {
    int i, j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            printf("[%c]", tablero[i][j]);
        }
        printf("\n");
    }
}
