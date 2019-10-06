#include <stdio.h>


// Napisati program koji će s tipkovnice učitati stanje bankovnog računa izraženo u lipama. Nije potrebno provjeravati je li upisan ispravan broj
// Ispisati stanje bankovnog računa izraženo u broju kuna i broju lipa

/*
Upisite stanje racuna u lipama > 15137(\n)
Kuna: 151 Lipa: 37
*/
int main(void){
    
    int n;
    
    printf("Upisite stanje racuna u lipama > ");
    scanf("%d", &n);

    printf("Kuna: %d Lipa: %d\n", n/100, n%100);
    return 0;
}