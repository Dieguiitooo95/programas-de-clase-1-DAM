#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    system("clear");

    FILE *imagen;
    short res_h,res_v;

    imagen = fopen("DonBosco.pcx", "rb");
    fread(imagen, 12, SEEK_SET);
    fseek(&res_h, 2, 1, imagen);
    fseek(&res_v, 2, 1, imagen);

    fclose(imagen);

    printf("Res: %iX%iY\n", res_h, res_v);

    return EXIT_SUCCESS;
}
