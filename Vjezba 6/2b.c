/*

S tipkovnice učitavati i sumirati cijele brojeve dok god su oni djeljivi s 3 ili 7.
Na kraju ispisati sumu učitanih brojeva.
Podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se učitavanje prekida) ne dodaje u sumu.
Voditi računa o tome da već i prvi učitani broj može biti "neispravan", te da suma na kraju programa može biti 0.


a) Riješiti pomoću petlje s ispitivanjem uvjeta na početku
b) Riješiti pomoću petlje s ispitivanjem uvjeta na kraju

*/

#include <stdio.h>

int main(void){
    int rezultat = 0, broj;

    do {
        printf("Upisite broj > ");
        scanf("%d", &broj);

        if (broj % 3 == 0 || broj % 7 == 0){
            rezultat += broj;
        }
    } while (broj % 3 == 0 || broj % 7 == 0);
    
    printf("suma = %d\n", rezultat);
    return 0;
}


// treba skenirat broj, provjerit ako je okej uvjet, ako da ga dodat u sumu