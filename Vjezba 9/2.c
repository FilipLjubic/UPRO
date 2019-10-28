/*

Definirati trodimenzijsko cjelobrojno polje veličine 4 sloja, 3 retka i 6 stupaca te ga na najlakši mogući način 
    napuniti vrijednostima prikazanim u primjeru izvršavanja programa.
    
Zatim polje ispisati u obliku prikazanom u primjeru.

Uočiti da se iza zadnjeg člana polja koji je ispisan, 
    ispisao samo jedan znak za skok u novi red,a da su slojevi međusobno razdvojeni praznim retkom.

*/

#include <stdio.h>

int main(void){
    for (int k = 1; k <= 4; k++){
        printf("%d. sloj\n", k);
        for (int i = 1; i <= 3; i++){
            for (int j = 1; j <= 6; j++){
                printf("%5d", k * 100 + i * 10 + j);
            }
            printf("\n");
        }
        if (k == 4) break;
        printf("\n");
    }
    return 0;
}