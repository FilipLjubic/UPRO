/*

S tipkovnice učitati dva niza znakova (string) od kojih svaki zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 20 
 znakova. 
Ako je u neki od nizova učitana i oznaka novog retka, izbaciti je iz tog niza. 

Učitati cijeli broj te ako broj predstavlja ispravnu poziciju znaka u prvom nizu, u prvi niz na zadanu poziciju umetnuti drugi niz te ispisati 
(sada promijenjeni) prvi niz na zaslon. 

Inače, ispisati poruku "Neispravna pozicija". 
Smatra se da pozicije počinju od 1, tj. prvi znak u nizu (s indeksom nula) jest znak na poziciji 1.

*/

#include <stdio.h>

int main(void){
    char arr1[21], arr2[21];
    int n, i, j, m = 0;

    printf("Upisite 1. niz > ");

    fgets(arr1, 21, stdin);
    for (i = 0; i < 20; i++){
        if (arr1[i] == '\n'){
            arr1[i] = '\0';
            break;
        }
    }

    printf("Upisite 2. niz > ");

    fgets(arr2, 21, stdin);
    for (j = 0; j < 20; j++){
        if (arr2[j] == '\n'){
            arr2[j] = '\0';
            break;
        }
    }

    printf("Upisite poziciju > ");
    scanf("%d", &n);

    n -= 1;
    
    if (n >= i || n < 0 || n >= j){
        printf("Neispravna pozicija\n");
        return 1;
    }
    else{
        // as spaghetti as it gets
        for (int k = i; k >= n; k--){
            arr1[k + j] = arr1[k];
        }
        
        for (int l = n; l < n + j; l++){
            arr1[l] = arr2[m];
            m++;
        }
    }
    printf("%s\n", arr1);
}