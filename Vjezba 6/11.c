/*

Učitavati cijele brojeve dok se ne unese broj nula. 
Ispisati najmanji negativni i najveći pozitivni broj koji je do tada učitan. 

Ako nije učitan niti jedan negativni ili nije učitan niti jedan pozitivni broj, ispisati odgovarajuće poruke (vidjeti primjere izvršavanja).

Upisite brojeve > -15 54 3 -3 -18 1 24 -2 21 0
Najmanji negativan = -18
Najveci pozitivan = 54


Upisite brojeve > 11 4 22 13 0
Nije upisan niti jedan negativni broj
Najveci pozitivan = 22

*/

#include <stdio.h>

int main(void){
    int n, najmanji_neg = 0, najveci_poz = 0;

    printf("Upisite brojeve > ");
    do {
        scanf("%d", &n);
        if (n > najveci_poz && n > 0){
            najveci_poz = n;
        }
        if (n < najmanji_neg && n < 0){
            najmanji_neg = n;
        }
    } while (n != 0);
    
    if (najmanji_neg == 0){
        printf("Nije upisan niti jedan negativni broj\n");
    } else {
        printf("Najmanji negativan = %d\n", najmanji_neg);
    }

    if (najveci_poz == 0){
        printf("Nije upisan niti jedan pozitivni broj\n");
    } else{
        printf("Najveci pozitivan = %d\n", najveci_poz);
    }
    return 0;
}