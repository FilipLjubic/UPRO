/*

(prosli zadatak)
S tipkovnice učitavati i sumirati cijele brojeve dok god su oni djeljivi s 3 ili 7.
Na kraju ispisati sumu učitanih brojeva.
Podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se učitavanje prekida) ne dodaje u sumu.
Voditi računa o tome da već i prvi učitani broj može biti "neispravan", te da suma na kraju programa može biti 0.


(novi)
Slično kao prethodni zadatak, uz razliku: 

podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se prekida učitavanje) također dodaje u sumu

a) Riješiti pomoću petlje s ispitivanjem uvjeta na početku

*/

#include <stdio.h>

int main(void){
    int rezultat = 0, broj = 3;

    while (broj % 3 == 0 || broj % 7 == 0){
        printf("Upisite broj > ");
        scanf("%d", &broj);

        rezultat += broj;
    }
    printf("suma = %d\n", rezultat);
    return 0;

}