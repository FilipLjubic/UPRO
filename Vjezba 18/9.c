/*

Definirati tip podatka tTocka kojim se opisuje jedna točka u pravokutnom koordinatnom sustavu (x i y su vrijednosti tipa double). 

Napisati funkciju udaljToc koja kao parametre prima dva podatka tipa tTocka i izračunava udaljenost među tim točkama (rezultat je tipa double).

Napisati glavni program koji će u varijable t1 i t2 tipa tTocka učitati koordinate dviju točaka, 
zatim pomoću funkcije udaljToc izračunati njihovu udaljenost, te izračunatu vrijednost ispisati na zaslon.

*/
#include <stdio.h>
#include <math.h>


//iz nekog razloga mi ne radi s doubleom
typedef struct{
    float x;
    float y;
} tTocka;

float udaljToc(tTocka t1, tTocka t2){
    float rez = sqrt(pow(t2.x - t1.x, 2.) + pow(t2.y - t1.y, 2.));
    return rez;
}

int main(void){
    tTocka t1;
    tTocka t2;
    printf("Upisite koordinate 1. tocke > ");
    scanf("%f %f", &t1.x, &t1.y);

    printf("Upisite koordinate 2. tocke > ");
    scanf("%f %f", &t2.x, &t2.y);

    printf("%f\n", udaljToc(t1, t2));
    return 0;
}