#include "comprobaciones.h"

int columnaLlena(char tablero[6][7], int columna) {
    
    if (tablero [0][columna] == 'X' || tablero [0][columna] == 'O') {
        return 1;
    } else {
        return 0;
    }
}

int comprobarHorizontal(char tablero [6][7]) {

    int i, j;

    for (i = 5; i >= 0; i--) {
        for (j = 0; j < 4; j++) {
            if (tablero[i][j] == 'X' && tablero[i][j + 1] == 'X' && tablero[i][j + 2] == 'X' && tablero[i][j + 3] == 'X') {
                printf("GAME OVER - Jugador 1 gana. ¡¡¡Enhorabuena!!!\n\n");
                return 1;
            } else if (tablero[i][j] == 'O' && tablero[i][j + 1] == 'O' && tablero[i][j + 2] == 'O' && tablero[i][j + 3] == 'O') {
                printf("GAME OVER - Jugador 2 gana. ¡¡¡Enhorabuena!!!\n");
                return 2;
            }
        }
    }
    return 0;
}

int comprobarVertical(char tablero [6][7]) {

    int i, j;

    for (i = 5; i > 0; i--) {
        for (j = 0; j < 4; j++) {
            if (tablero[i][j] == 'X' && tablero[i - 1][j] == 'X' &&
                    tablero[i - 2][j] == 'X' && tablero[i - 3][j] == 'X') {
                printf("GAME OVER - Jugador 1 gana. ¡¡¡Enhorabuena!!!\n");
                return 1;
            } else if (tablero[i][j] == 'O' && tablero[i - 1][j] == 'O'
                    && tablero[i - 2][j] == 'O' && tablero[i - 3][j] == 'O') {
                printf("GAME OVER - Jugador 2 gana. ¡¡¡Enhorabuena!!!\n");
                return 2;
            }
        }
    }
    return 0; /*En caso de no encontrar jugador ganador*/
}

int comprobarDiagonal(char tablero[6][7]) {

    int i, j;

    for (i = 5; i > 0; i--) {
        for (j = 0; j < 4; j++) {
            if (tablero[i][j] == 'X' && tablero[i - 1][j + 1] == 'X' &&
                    tablero[i - 2][j + 2] == 'X' && tablero[i - 3][j + 3] == 'X') {
                printf("GAME OVER - Jugador 1 gana. ¡¡¡Enhorabuena!!!\n");
                return 1;
            } else if (tablero[i][j] == 'O' && tablero[i - 1][j + 1] ==
                    'O' && tablero[i - 2][j + 2] == 'O' && tablero[i - 3][j + 3] == 'O') {
                printf("GAME OVER - Jugador 2 gana. ¡¡¡Enhorabuena!!!\n");
                return 2;
            } else if (tablero[i][j] == 'X' && tablero[i - 1][j - 1] ==
                    'X' && tablero[i - 2][j - 2] == 'X' && tablero[i - 3][j - 3] == 'X') {
                printf("GAME OVER - Jugador 1 gana. ¡¡¡Enhorabuena!!!\n");
                return 1;
            } else if (tablero[i][j] == 'O' && tablero[i - 1][j - 1] ==
                    'O' && tablero[i - 2][j - 2] == 'O' && tablero[i - 3][j - 3] == 'O') {
                printf("GAME OVER - Jugador 2 gana. ¡¡¡Enhorabuena!!!\n");
                return 2;
            }
        }
    }
    return 0; /*En caso de no encontrar jugador ganador*/
}

void borrarPantalla() {

    system("clear");
}

int tableroLleno(char tablero [6][7]) {

    int i = 0, j = 0;

    if (tablero[i][j] != ' ' && tablero[i][j + 1] != ' ' && tablero[i][j + 2] != ' ' && tablero[i][j + 3] != ' ' && tablero[i][j + 4] != ' ' && tablero[i][j + 5] != ' ' && tablero[i][j + 6] != ' ') {
        printf("Ningun jugador ha ganado. Empate.\n");
        return 1;
    } else {
        return 0;
    }
}

int comprobarGanador(char matriz [6][7]) {

    if (comprobarHorizontal(matriz) == 1 || comprobarVertical(matriz) == 1 || comprobarDiagonal(matriz) == 1) {
        return 1;
    } else if (comprobarHorizontal(matriz) == 2 || comprobarVertical(matriz) == 2 || comprobarDiagonal(matriz) == 2) {
        return 2;
    } else if (tableroLleno(matriz) == 1) {
        return 3;
    } else {
        return 4;
    }
}

