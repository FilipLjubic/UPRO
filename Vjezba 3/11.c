#include <stdio.h>

int main(void){

    float napierConst = 2.71828f;
    float saturnSunDist =1.43344e12f;
    float planckConst = 6.62607e-34f;

    // Napierova konstanta
    printf("Napierova konstanta:\n");
    printf("%.6f\n", napierConst);
    printf("%6.2f\n", napierConst);
    printf("%6.3f\n", napierConst);
    printf("%14.10f\n \n", napierConst);

    // Srednja udaljenost Saturna i Sunca
    printf("Srednja udaljenost Saturna i Sunca:\n");
    printf("%.6f\n",saturnSunDist);
    printf("%.2f\n", saturnSunDist);
    printf("%11.4e\n \n", saturnSunDist);

    //Planckova konstanta
    printf("Planckova konstanta:\n");
    printf("%.6f\n", planckConst);
    printf("%40.36f\n", planckConst);
    printf("%.5e\n", planckConst);
    printf("%18.10e\n", planckConst);
}

