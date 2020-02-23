/*

Napisati funkciju korijeni koja za zadani nenegativni cijeli broj n (tipa unsigned int) vraća tri vrijednosti tipa double: 
 n½, n⅓ i n⅕.
Napisati glavni program (funkciju main) tako da s tipkovnice učita jedan cijeli broj, pozove funkciju i rezultate dobivene pozivom
 funkcije ispiše na zaslon sukladno prikazanom primjeru

*/

#include <stdio.h>
#include <math.h>

void korijeni(unsigned int n, double *drugi, double *treci, double *peti){
    *drugi = pow(n, 1./2);
    *treci = pow(n, 1./3);
    *peti = pow(n, 1./5);
}

int main(void){
    double drugi, treci, peti;
    unsigned int n;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%u", &n);

    korijeni(n, &drugi, &treci, &peti);
    printf("Rezultati su:\n");
    printf("%.8lf\n%.8lf\n%.8lf", drugi, treci, peti);
    
    return 0;
}