#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a,
	b,
	c,
	d,
	e,
	f,
	g,
	h;

    printf("Mira tu fila del tablero.\n");
    printf("¿Hay una ficha en la posición a? (1=Si/0=No)");
    
    scanf(" %i", &a);

    printf("¿Hay una ficha en la posición b? (1=Si/0=No)");

    scanf(" %i", &b);

    printf("¿Hay una ficha en la posición c? (1=Si/0=No)");

    scanf(" %i", &c);

    printf("¿Hay una ficha en la posición d? (1=Si/0=No)");

    scanf(" %i", &d);

    printf("¿Hay una ficha en la posición e? (1=Si/0=No)");

    scanf(" %i", &e);

    printf("¿Hay una ficha en la posición f? (1=Si/0=No)");

    scanf(" %i", &f);

    printf("¿Hay una ficha en la posición g? (1=Si/0=No)");

    scanf(" %i", &g);

    printf("¿Hay una ficha en la posición h? (1=Si/0=No)");

    scanf(" %i", &h);

    if (a == 1 || b == 1 || c == 1 || d == 1 || e == 1 || f == 1 || g == 1 || h == 1)
	printf("Hay una ficha en horizontal. ME LA COMO !!\n");
    else
	printf("NO hay NA !!\n");
    
    int i,
	j,
	k,
	l,
	m,
	n,
	o,
	p;

    printf("Mira tu columna del tablero.\n");
    printf("¿Hay una ficha en la posición i? (1=Si/0=No)");
    
    scanf(" %i", &i);

    printf("¿Hay una ficha en la posición j? (1=Si/0=No)");

    scanf(" %i", &j);

    printf("¿Hay una ficha en la posición k? (1=Si/0=No)");

    scanf(" %i", &k);

    printf("¿Hay una ficha en la posición l? (1=Si/0=No)");

    scanf(" %i", &l);

    printf("¿Hay una ficha en la posición m? (1=Si/0=No)");

    scanf(" %i", &m);

    printf("¿Hay una ficha en la posición n? (1=Si/0=No)");

    scanf(" %i", &n);

    printf("¿Hay una ficha en la posición o? (1=Si/0=No)");

    scanf(" %i", &o);

    printf("¿Hay una ficha en la posición p? (1=Si/0=No)");

    scanf(" %i", &p);

    if (i == 1 || j == 1 || k == 1 || l == 1 || m == 1 || n == 1 || o == 1 || p == 1)
	printf("Hay una ficha en vertical. ME LA COMO !!");
    else
	printf("NO hay NA !!\n");
    
    return EXIT_SUCCESS;
}
