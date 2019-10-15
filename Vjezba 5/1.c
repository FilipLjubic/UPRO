/*

Ispravljanje greska

*/

#include <stdio.h>

#define PI 3.14159


int main(void) {
    float a, b;

    printf("Upisite duljinu velike poluosi a > ");
    scanf("%f", &a);

    if (a > 0.f) {
        
        printf("Upisite duljinu male poluosi b > ");
        scanf("%f", &b);

        if (b > 0.f) {

            float povrsina = a * b * PI;

            printf("Povrsina elipse a = %.4f, b = %.4f je %.4f\n", a, b, povrsina);

        }
        else { 
                printf("Duljina male poluosi mora biti veca od nule\n");
            }
    } 
    else {
        printf("Duljina velike poluosi mora biti veca od nule\n");
    }

    return 0;
}