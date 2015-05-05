#ifndef __COLA_H__
#define __COLA_H__

typedef struct TCola {
    int max;
    int cima;
    int *data;
} Cola;

#ifdef __cplusplus
extern "C" {
#endif
    bool push(int mensaje, Stack *mi_cola);
    int pop(Cola *mi_cola);
    int length(Cola *mi_cola);
    Cola *crear_cola(size_t max_mensaje);
    void borrar_cola(Cola *mi_cola);
#ifdef __cplusplus
}
#endif

#endif
