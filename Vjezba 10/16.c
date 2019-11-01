/*

Napisati program koji učitava nenegativne cijele brojeve (unsigned int) u heksadekadskom obliku, dok god se ne upiše nula.
Svaki prije toga upisani broj ispisati u obliku dekadskog broja. 
Uputa: koristiti konverzijsku specifikaciju koja nenegativni cijeli broj može učitati u heksadekadskom obliku.

*/

#include <stdio.h>

int main(void){
    unsigned int n;

    do {
        printf("Upisite heksadekadski nenegativni cijeli broj > ");
        scanf("%x", &n);
        if (n == 0){
            break;
        } 
        printf("%u\n", n);

    } while(1);
    return 0;
}