/*

Izračunati i na zaslon ispisati sumu sljedećih članova niza:

1 - 1/2 + 1/4 - 1/8.. + 1/999 - 1/1000

c) Riješiti pomoću petlje s ispitivanjem uvjeta na kraju

*/

#include <stdio.h>

int main(void){
    float rezultat = 0;
    
    int i = 1;
    do {
        if (i % 2 == 1){
            rezultat += 1.f/i;
        } else {
            rezultat -= 1.f/i;
        }
        
        i ++;
    } while (i <= 1000);
    printf("%f\n", rezultat);
    return 0;
}