/*

S tipkovnice učitati cijeli broj n koji mora biti između 1 i 10 (uključivo s granicama).
Ako broj nije ispravan, ispisati poruku Broj znamenki je neispravan.
Ako je broj ispravno upisan, učitati n oktalnih znamenki i ispisati dekadski ekvivalent učitanog oktalnog broja.

*/

#include <stdio.h>
#include <math.h>

int main(void){
    int n, temp, dek = 0;

    scanf("%d", &n);
    if (n < 1 || n > 10){
        printf("Broj znamenki je neispravan\n");
        return 1;
    }

    for (int i = 1;i <= n;i++){
        scanf("%d", &temp);
        dek = dek + (pow(8,n - i) * temp);
    }
    printf("%d\n", dek);
    return 0;
}

