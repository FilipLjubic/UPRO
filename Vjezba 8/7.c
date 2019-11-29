/*

Učitavati cijele brojeve iz zatvorenog intervala [1, 20000] dok god se ne upiše broj izvan tog intervala. 

Prebrojati koliko je upisano brojeva iz intervala [1, 100], 
koliko iz intervala [101, 200], koliko iz intervala [201, 300], ..., koliko iz intervala [19901, 20000]. 

Pronaći i ispisati interval u kojem ima najviše upisanih brojeva.

Ako ima više intervala u kojima ima jednak broj (najveći) upisanih brojeva, ispisati sve takve intervale.

*/

#include <stdio.h>

int main(void){
    int n, najvise = 0;
    int intervali[200] = {0};         //intervali[0] == 0 * 100 + 1 do 0 * 100 + 100 
                                      // intervali[199] == 19 901 do 20 000

    printf("Upisite brojeve [1, 20000] > ");
    do {
        scanf("%d", &n);
        if (n < 1 || n > 20000){
            break;
        }

        intervali[(n - 1) / 100] += 1;          //npr ako je n = 100, onda ce prvo bit 99, pa ce spadat pod intervali[0]

        if (intervali[(n - 1) / 100] > najvise){
            najvise = intervali[(n - 1) / 100];
        }
    } while(1);

    for (int i = 0; i < 200; i++){
        if (intervali[i] == najvise){
            printf("[%d, %d]: %d\n", i * 100 + 1, i * 100 + 100 , najvise);
        }
    }
    
    return 0;
}