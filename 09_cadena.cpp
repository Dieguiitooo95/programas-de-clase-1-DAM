#include <stdio.h>
#include <stdlib.h>

// "0" es un valor centinela, imprime hasta encontrar un 0
// Cualquiera de los dos "char texto[]" valen, son lo mismo. Porque en las comillas va implicito el valor centinela.
// El segundo while sirve para imprimir caracter a caracter al revés.
// "sizeof ()" es lo que ocupa en bytes tu variable entre parentesis.

int main(int argc, char *argv[]) {

//    char texto[] = {'H', 'o', 'l', 'a', 0};
    char texto[] = "aloH";
    char *p = texto;

    while(*p != '\0')
	p++;

    while( p > texto )
	printf("%c", *--p);
    printf("\n");

    sizeof(texto) / sizeof(int);


    return EXIT_SUCCESS;
}
