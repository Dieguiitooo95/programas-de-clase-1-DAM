#include <stdlib.h>
#include <stdio.h>

int main() {

    int x, y;
    FILE *pnumeros;

    pnumeros = fopen("numeros.bin", "rb");

    fread(&x, sizeof(int), 1, pnumeros);
    fread(&y, sizeof(int), 1, pnumeros);

    printf("%i\n", x);
    printf("%i\n", y);

    fclose(pnumeros);

}
