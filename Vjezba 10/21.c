/*

Napisati program kojim će se učitati prirodni broj niz intervala [1, 4250000000]. Nije potrebno provjeravati je li upisan ispravan broj.
Ispisati kvadrat učitanog broja n.

*/

#include <stdio.h>


int main(void){
    unsigned long int n;
    
    printf("Upisite prirodni broj u granicama [1, 4250000000] > ");
    scanf("%llu", &n);

    printf("%llu * %llu = %llu\n", n, n, n * n);
    return 0;
}