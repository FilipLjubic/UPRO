/*

Napisati funkciju maks koja kao parametre prima dva pokazivača na objekte tipa int, određuje veću od dvije vrijednosti u ta dva objekta i
 tu vrijednost (cijeli broj) vraća preko imena funkcije. 
Napisati glavni program (funkciju main) tako da s tipkovnice učita dva cijela broja,
 pozove funkciju i rezultat dobiven pozivom funkcije ispiše na zaslon sukladno prikazanim primjerima.

*/

#include <stdio.h>


int maks(int *p1, int *p2){
    int rez;
    if (*p1 > *p2){
        rez = *p1;
    }
    else{
        rez = *p2;
    }
    return rez;
}

int main(void){
    int m,n;
    printf("Upisite 2 cijela broja > ");
    scanf("%d %d", &m, &n);

    printf("Rezultat je %d", maks(&m, &n));
    return 0;
}