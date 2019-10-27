/*

S tipkovnice učitati cijeli broj n koji mora biti između 1 i 31 (uključivo s granicama).
Ako broj nije ispravan, ispisati poruku "Broj znamenki je neispravan."

Ako je broj ispravno upisan, učitati n binarnih znamenki i ispisati dekadski ekvivalent učitanog binarnog broja 
(ne primjenjuje se tehnika dvojnog komplementa, pa je dekadski ekvivalent sigurno pozitivan broj).

4
1 1 0 1
= 13

*/

#include <stdio.h>

int main(void){
    int n, temp, dek = 0;

    scanf("%d", &n);
    if (n < 1 || n > 31){
        printf("Broj znamenki je neispravan.\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        dek = dek * 2 + temp;
    }
    printf("%d\n", dek);
    return 0;
}

/*

ide s lijeva na desno

input           dek
1                1
0                2
0                4
1                9
1                19
==> dek = dek * 2 + input

*/