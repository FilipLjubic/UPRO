/*

Izračunati i na zaslon ispisati sumu prvih 1000 prirodnih brojeva većih od 10 koji su djeljivi sa
7 ili im je zbroj zadnje dvije znamenke jednak 5 (dakle, suma brojeva 14, 21, 23, 28, 32, 35, 41, 42, ...).

*/

#include <stdio.h>

int main(void){
    int suma = 0;
    int rezultat = 0;

    for (int i = 11; suma < 1000; i++){

        if (i % 7 == 0 || ((i % 10) + ((i / 10) % 10) == 5)) {     //  (i % 10) + ((i / 10) % 10) je zbroj zadnjih dviju znamenki
               rezultat += i;
               suma += 1;
            }
    }
    printf("%d\n", rezultat);
    return 0;
}


