/*

Napisati program koji će s tipkovnice učitati dva cijela broja.
Ako je jedan od učitanih brojeva veći od 100, a onaj drugi manji od 100, ispisati poruku Jedan je veci, drugi je manji od 100
(uočiti:piše jedan odu čitanih brojeva, a ne prvi učitani broj).
Inače, ne ispisati ništa.

*/

#include <stdio.h>

int main(void){
    int prvi, drugi;

    printf("Upisite dva broja > ");
    scanf("%d %d", &prvi, &drugi);
    if (((prvi > 100) & (drugi < 100)) || ((prvi < 100) & (drugi > 100))){
        printf("Jedan je veci, drugi je manji od 100\n");
    }
    return 0;
}