/*

Izračunati i na zaslon ispisati sumu sljedećih članova niza:

1 - 1/2 + 1/4 - 1/8.. + 1/999 - 1/1000

a) Riješiti pomoću petlje s poznatim brojem ponavljanja

*/

#include <stdio.h>

int main(void){
    float rezultat = 0;
    
    for(int i = 1;i <= 1000;i++){
        if (i % 2 == 1){
            rezultat += 1.f/i;
        }
        else{
            rezultat -= 1.f/i;
        }
        printf("%f\n", rezultat);
    }
    printf("%f\n", rezultat);
    return 0;
}