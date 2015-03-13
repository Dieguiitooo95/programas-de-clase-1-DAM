#include <stdio.h>
#include <stdlib.h>

#define color(x)

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet SPRITE");

    printf("\x1b[%im ] \n", color(5));
    printf("\x1b[0m] \n");

    return EXIT_SUCCESS;
}
