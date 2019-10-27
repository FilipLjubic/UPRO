/*

Učitati pozitivni cijeli broj. 
Nije potrebno provjeravati je li upisan broj ispravan. 

Uzastopnim dijeljenjem s 2 odrediti znamenke ekvivalentnog binarnog broja. 
Ispisati ekvivalentni binarni broji to tako da se znamenke binarnog broja ispišu ispravnim redoslijedom. 

Uputa: znamenke dobivene uzastopnim dijeljenjem ubacivati u polje. 
Ispisati članove polja obrnutim redoslijedom.
Broj znamenki ekvivalentnog binarnog broja sigurno neće biti veći od 31.  

*/

#include <stdio.h>

int main(void){
    int n, ostatak[32], i = 0;

    printf("Upisite cijeli broj > ");
    scanf("%d", &n);
    
    while (n > 0){
        ostatak[i] = n % 2;
        i++;
        n = n / 2;
    }
    for (int j = 0; j < i; j++){
        printf("%d", ostatak[i - j - 1]);
    }
    return 0;
}