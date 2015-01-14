#include "turno.h"


void turnoJugador(char tablero[][7], char ficha) {

    int i = 6, j;
    char eleccion[100];

    printf("Turno jugador %c:\n", ficha);
    do {
        printf("Jugador %c elija la columna para colocar su ficha:\n", ficha);
        scanf("%s", eleccion);
        getchar();   
     
        j = atoi(eleccion); /*Conversion con atoi de char a int*/
        j--;

        if (j < 0 || j >= 7 || columnaLlena(tablero, j)==1) {
            printf("Columna incorrecta!!!\n");
        } 
         
    } while (j < 0 || j >= 7 || columnaLlena(tablero, j)==1);

   
    if (j <= 7 || j > 0) {
        while (i > 0 && tablero [i][j] != ' ') {
            i--;
        }
    } else {
        return;
    }
   
    while (i > 0 && tablero [i][j] != ' ') {
        i--;
    }
    if (i < 0) {
        return;
    } else {
        tablero [i][j] = ficha;
    }
}


