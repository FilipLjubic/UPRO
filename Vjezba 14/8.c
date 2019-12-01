/*

Napisati funkciju naziva kolikiJeInt koja vraća broj bajtova koji se koriste za pohranu podatka tipa int. 

Napomena: različiti prevodioci mogu za pohranu podatka tipa int koristiti različiti broj bajtova,
te se funkcija koja vraća konstantu 4 (npr. pomoću return 4;) ne može smatrati ispravnom (prenosivom, portabilnom).

*/

#include <stdio.h>

void kolikiJeInt(void){
    printf("%lu\n", sizeof(int));
}

int main(void){
    kolikiJeInt();
    return 0;
}