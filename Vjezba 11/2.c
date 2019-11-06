/*

S tipkovnice učitati niz znakova (string) koji zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 20 znakova.
Ako je u niz učitana i oznaka novog retka, izbaciti je iz učitanog niza. 
Ispisati niz znakova. 
Pronaći i ispisati najveću ASCII vrijednost znaka u nizu. 
*/

#include <stdio.h>

int main(void){
    char c[21]; 
    int max;
    printf("Upisite niz > ");
    fgets(c, 21, stdin);
    printf("Niz: ");
    
    max = c[0];

    for (int i = 0; i < 20; i++){
        
        if (c[i] == '\n'){
            continue;
        }
        if (c[i] > max){
            max = c[i];
        }
        printf("%c", c[i]);
    }
    printf("\nNajveca ASCII vrijednost: %d\n", max);
    return 0;
}