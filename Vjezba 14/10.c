/*

Napisati funkciju printBinarykoja će za zadanu vrijednost nenegativnog cijelog broja, pomoću 32 uzastopna poziva funkcije getBit, na zaslon ispisati njegovu binarnu vrijednost.
U funkciji main učitati vrijednost za nenegativni cijeli broj te pozivom funkcije printBinary ispisati njegov binarni ekvivalent.

*/

#include <stdio.h>

int getBit(unsigned int x, int i){
    // posmak u desno za n, pa provjerimo ako je 1
    return x >> i & 0x1;
}

int main(void){
    unsigned int x;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%u", &x);

    for (int i = 31; i >= 0; i--){
        printf("%d", getBit(x, i));
    }
    printf("\n");
    
    return 0;
}