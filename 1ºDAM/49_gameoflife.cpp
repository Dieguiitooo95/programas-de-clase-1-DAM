#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 8

void media(double orig[N][N], double dest[N][N], int fila, int col){
    if (fila == 0 || col == 0 || fila == N-1 || col == N-1){
	dest[fila][col] = orig[fila][col];
	return;
    }

    dest[fila][col] = orig[fila-1][col] +
	orig[fila][col+1] +
	orig[fila+1][col] +
	orig[fila][col-1] +
	orig[fila-1][col-1] +
	orig[fila-1][col+1] +
	orig[fila+1][col+1] +
	orig[fila+1][col-1];
}

void imprime(double matriz[N][N]){
    uslip(50000);
    system("clear");

    for (int i=0; i<N; i++){
	for (int j=0; j<N; j++)
	    if(dest[fila][col] == 2 || dest[fila][col] == 3)
		printf("X");
	    else
		printf(" ");
	
	printf("\n");
    }
}

int main(int argc, char*argv[]) {
    double A[N][N] = {
	{ 0, 0, 0, 1, 0, 0, 0}
	{ 0, 0, 0, 1, 0, 0, 0}
	{ 0, 0, 0, 1, 0, 0, 0}
	{ 1, 1, 1, 1, 1, 1, 1}
	{ 0, 0, 0, 1, 0, 0, 0}
	{ 0, 0, 0, 1, 0, 0, 0}
	{ 0, 0, 0, 1, 0, 0, 0}
    };

    double final[N][N];
    double (*p_inicial)[N]= A;
    double (*p_final)[N] = final;
    double (*aux)[N];

    imprime(A);

    for (int vez=0; vez<10; vez++){
	for (int i=0; i<N; i++)
	    for (int j=0; j<N; j++)
		media(p_inicial, p_final, i, j);
	
	imprime(p_final);
	aux = p_inicial;
	p_inicial = p_final;
	p_final = aux;
    }

    return EXIT_SUCCESS;
}
