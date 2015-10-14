#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline.history.h>

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet READLINE");

    char *line;

    line = readline("Dime tu nombre: ");
    printf("Jodete %s\n, cabron !", line);

    free(line);

    return EXIT_SUCCESS;
}
