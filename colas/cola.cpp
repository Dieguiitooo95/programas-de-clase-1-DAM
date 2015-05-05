#include<stdlib.h>
#include<stdio.h>
#include"cola.h"

int main() {
    
    bool push(int mensaje, Cola *mi_cola){
    if (mi_cola->cima >= mi_cola->max)
	return false;
    mi_cola->data[mi_cola->cima++] = mensaje;
    return true;
    }

    int shift(Cola *mi_cola){
    if (mi_cola->cima <= 0)
	return 0;
    return mi_cola->data[--mi_cola->cima];
    }
    
    int length(Cola *mi_cola){
    return mi_cola->cima;
    }
    
    Cola *crear_cola(size_t max_mensaje){
    Cola *mi_cola = (Cola *) malloc(sizeof(Cola));
    mi_cola->cima = 0;
    mi_cola->max = max_mensaje;
    mi_cola->data = (char *) malloc(max_mensaje * sizeof(char));
    return mi_cola;
    }

    void borrar_cola(Cola *mi_cola){
    free(mi_cola->data);
    free(mi_cola);
    }
