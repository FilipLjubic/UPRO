/*

Napisati funkciju getBit koja vraća vrijednost n-tog bita zadane vrijednosti x tipa unsigned int.
U funkciji main učitati vrijednost nenegativnog cijelog broja, vrijednost za n(redni broj bita), pozivom funkcije izračunati vrijednost n-tog bita, te ga ispisati.

*/

#include <stdio.h>

int getBit(unsigned int x, int n){
    // posmak u desno za n, pa provjerimo ako je 1
    return x >> n & 0x1;
}

int main(void){
    int n;
    unsigned int x;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%u", &x);
    printf("Upisite redni broj bita > ");
    scanf("%d", &n);

    printf("Vrijednost bita je %d\n", getBit(x, n));
    return 0;
}