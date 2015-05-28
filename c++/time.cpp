#include <time.h>
#include <stdio.h>
#include <dos.h>

int main(void)
{
    clock_t start, end;
    start = clock();

    /* tus instrucciones aqui */

    delay(2000);

    /* fin de las instrucciones*/

    end = clock();
    printf("The time was: %f\n", (end - start) / CLK_TCK);

    return 0;
}
